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

        //TODO: create a version of this which is embedded within the GeneratePathToTile method to make it minimal alloc
        private uint GetInitiativeCostForPath(List<Tile> _path)
        {
            uint total = 0;
            for (int i = 0; i < _path.Count - 1; i++)
                for (int j = 0; j < Tile.NEIGHBOUR_COUNT; j++)
                    if (_path[i].GetNeighbour((TileNeighbour)j) == _path[i + 1])
                        total += j % 2 == 0 ? HORIZONTAL_MOVE_COST : DIAGONAL_MOVE_COST;
            return total;
        }
        private uint GetInitiativeCostForPath(Vector2 _origin, Vector2 _goal)
        {
            return GetInitiativeCostForPath(GeneratePathToTile(_origin, _goal));
        }
        
        //TODO: make blinks ignore impassable/difficult terrain
        private List<Tile> GeneratePathToTile(Vector2 _origin, Vector2 _goal)
        {
            bool isBlink = (MovementFlags == InterruptEventType.Movement_Start);

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

            if (previous[goal] == null)
                return null;

            List<Tile> goalPath = new List<Tile>();
            Tile current = goal;

            while (current != null)
            {
                goalPath.Add(current);
                current = previous[current];
            }

            goalPath.Reverse();

            //TODO: make this check recursive to find the nearest valid tile placement along path
            if (Tilemap.GetTile((int)goal.Coords.x, (int)goal.Coords.y).State == TileType.Impassable)
            {
                Debug.Log("Last tile is impassable");
                goalPath.RemoveAt(goalPath.Count - 1);
            }
            return goalPath;
        }

        public Path(Vector2 _origin, Vector2 _goal, InterruptEventType _movementFlags)
        {
            Tiles = GeneratePathToTile(_origin, _goal);
            PathCost = GetInitiativeCostForPath(Tiles);
            MovementFlags = _movementFlags;
        }
    }
}


