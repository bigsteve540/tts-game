using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using InterruptParameters;

namespace Game.Pathing
{
    public class Path : IMovementParameters
    {
        private const uint DIAGONAL_MOVE_COST = 10;
        private const uint HORIZONTAL_MOVE_COST = 5;

        public uint PathCost { get; }
        public List<Tile> Tiles { get; }

        public Tile Start => Tiles[0];
        public Tile End => Tiles[Tiles.Count - 1];

        public InterruptEventType MovementFlags { get; }

        private uint GetInitiativeCostForPath()
        {
            uint total = 0;
            for (int i = 0; i < Tiles.Count - 1; i++)
                total += (Tiles[i + 1].Coords.x == Tiles[i].Coords.x || Tiles[i + 1].Coords.y == Tiles[i].Coords.y) ? HORIZONTAL_MOVE_COST : DIAGONAL_MOVE_COST;
            return total;
        }
        
        private List<Tile> GeneratePathToTile(Vector2 _origin, Vector2 _goal)
        {
            bool isBlink = MovementFlags == InterruptEventType.Movement_Start;
            Debug.Log(isBlink);

            Dictionary<Tile, float> distances = new Dictionary<Tile, float>();
            Dictionary<Tile, Tile> previous = new Dictionary<Tile, Tile>();

            List<Tile> unvisited = new List<Tile>();

            Tile source = Tilemap.GetTile((int)_origin.x, (int)_origin.y);
            Tile goal = Tilemap.GetTile((int)_goal.x, (int)_goal.y);

            distances.Add(source, 0f);
            previous.Add(source, null);

            foreach (Tile tile in Tilemap.Tiles)
            {
                if (tile != source)
                {
                    distances[tile] = Mathf.Infinity;
                    previous[tile] = null;
                }
                unvisited.Add(tile);
            }

            while (unvisited.Count > 0)
            {
                Tile tile = null;
                foreach (Tile uTile in unvisited)
                    if (tile == null || distances[uTile] < distances[tile])
                        tile = uTile;

                if (tile == goal)
                    break;

                unvisited.Remove(tile);

                for (int i = 0; i < Tile.NEIGHBOUR_COUNT; i++)
                {
                    Tile targetNeighbour = tile.GetNeighbour((TileNeighbour)i);
                    if (targetNeighbour != null)
                    {
                        float moveCost = distances[tile] + (((i % 2 == 0) ? HORIZONTAL_MOVE_COST : DIAGONAL_MOVE_COST) * (isBlink ? 1f : Tilemap.GetTile(targetNeighbour.Coords).GetMovementCost()));

                        if (moveCost < distances[targetNeighbour])
                        {
                            distances[targetNeighbour] = moveCost;
                            previous[targetNeighbour] = tile;
                        }
                    }
                }
            }

            List<Tile> goalPath = new List<Tile>();

            //TODO: if end goal is unreachable, should output the path up until the point of being blocked
            if (previous[goal] == null)
            {
                goalPath.Add(source);
                return goalPath;
            }

            Tile current = goal;

            while (current != null)
            {
                goalPath.Add(current);
                current = previous[current];
            }

            goalPath.Reverse();
            goalPath = RecursiveImpassableTileRemove(goalPath.Count, goalPath);

            return goalPath;
        }

        private List<Tile> RecursiveImpassableTileRemove(int _cntr, List<Tile> _tiles)
        {
            _cntr--;
            if (_cntr == -1)
                return _tiles;

            if (_tiles[_cntr].State != TileType.Impassable)
                return _tiles;

            Debug.Log($"Tile {_cntr} is impassable");
            _tiles.RemoveAt(_cntr);
            return RecursiveImpassableTileRemove(_cntr, _tiles);
        }

        public Path(Vector2 _origin, Vector2 _goal, InterruptEventType _movementFlags)
        {
            MovementFlags = _movementFlags;
            Tiles = GeneratePathToTile(_origin, _goal);
            PathCost = GetInitiativeCostForPath();
        }
    }
}


