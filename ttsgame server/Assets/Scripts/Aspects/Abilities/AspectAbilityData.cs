using UnityEngine;
using RiptideNetworking;
using System.Collections.Generic;
using System.Linq;  

[CreateAssetMenu(fileName = "New Ability", menuName = "Aspects/New Ability")]
public class AspectAbilityData : ScriptableObject
{
    public string Name = default;
    [TextArea]
    public string Description = default;
    [Space]
    public int ActionPointCost = default;
    [Space]
    public AbilityTargeting Targeting = default;
    public AbilityAction[] Effects = default;

    public List<IEntityBehaviour> FilterEntities(IEntityBehaviour _caster, Message _message) //TODO: finish constructing methods
    {
        List<IEntityBehaviour> final = new List<IEntityBehaviour>();

        if(Targeting.Type == TargetingType.Self)
        {
            final.Add(_caster);
            return final;
        }

        for (int i = 0; i < Targeting.Filter.SelectionFilters.Length; i++)
        {
            SelectionFilter activeSelectFilter = Targeting.Filter.SelectionFilters[i];
            List<IEntityBehaviour> teamMatches = new List<IEntityBehaviour>();

            foreach (IEntityBehaviour entity in GameManager.Entities.Values)
            {
                bool entityNeutrality = entity.TeamID == 0;
                bool entityAlly = entity.TeamID == _caster.TeamID;

                if ((Targeting.Filter.TargetType & TargetFilter.TargetingRelation.Neutral) == TargetFilter.TargetingRelation.Neutral && entityNeutrality)
                    teamMatches.Add(entity);
                else if ((Targeting.Filter.TargetType & TargetFilter.TargetingRelation.Enemy) == TargetFilter.TargetingRelation.Enemy && !entityAlly && !entityNeutrality)
                    teamMatches.Add(entity);
                else if ((Targeting.Filter.TargetType & TargetFilter.TargetingRelation.Ally) == TargetFilter.TargetingRelation.Ally)
                    teamMatches.Add(entity);
            }

            switch (activeSelectFilter.Type)
            {
                case SelectionFilter.FilterType.Closest:
                    Vector2 offsetPos = _caster.MapPosition + activeSelectFilter.LocalOffset;
                    List<(int Id, uint Dist)> inRange = new List<(int Id, uint Dist)>();

                    for (int j = 0; j < teamMatches.Count; j++)
                        if (Utilities.GetChebyshevDistance(offsetPos, teamMatches[j].MapPosition, activeSelectFilter.Range, out uint _dist))
                            inRange.Add((teamMatches[j].EntityID, _dist));

                    inRange.OrderBy(entity => entity.Dist);
                    for (int j = 0; j < activeSelectFilter.MaxValidTargets; j++)
                    {
                        if (j > inRange.Count)
                            break;
                        final.Add(GameManager.Entities[inRange[j].Id]);
                    }
                    break;
                case SelectionFilter.FilterType.Designated:
                    int[] targetIds = _message.GetInts();

                    for (int j = 0; j < activeSelectFilter.MaxValidTargets; j++)
                        final.Add(GameManager.Entities[targetIds[j]]);
                    break;

                case SelectionFilter.FilterType.Radius:
                case SelectionFilter.FilterType.Random:
                    break;
            }
        }

        return final;
    }
}
