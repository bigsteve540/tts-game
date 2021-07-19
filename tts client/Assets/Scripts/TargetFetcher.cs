using RiptideNetworking;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetFetcher : MonoBehaviour
{
    private static bool fetching = false;
    private static int entityLayer = 1 << 9;

    static int currentAbilityIndex = -1;
    static TargetFilter currentFilter;
    static List<int> entityIDs = new List<int>();

    public static void StartFetching(int _abilityIndex, TargetingType _type, TargetFilter _filter)
    {
        if (fetching && currentAbilityIndex == _abilityIndex)
        {
            Message msg = Message.Create(MessageSendMode.reliable, (ushort)ClientToServerRequest.CastAspectAbility);
            msg.Add(GameManager.ActiveEntityID);
            msg.Add(currentAbilityIndex);
            msg.Add(entityIDs.ToArray());
            NetworkManager.Instance.Client.Send(msg);

            Debug.Log($"Ended fetching.");

            currentAbilityIndex = -1;
            fetching = false;
            InputManager.OnMouseClicked -= ScanTargets;
        }

        Debug.Log("Started Fetching.");
        fetching = true;
        bool match = false;
        foreach (SelectionFilter sFilter in _filter.SelectionFilters)
        {
            if (sFilter.Type == SelectionFilter.FilterType.ClientDesignated)
                match = true;
        }
        if (!match)
            return;

        currentAbilityIndex = _abilityIndex;
        currentFilter = _filter;
        InputManager.OnMouseClicked += ScanTargets;
    }

    private void Update()
    {
        
    }

    static void ScanTargets(InputManager.MouseData _data)
    {
        if (fetching)
        {
            Ray r = CameraController.ControllableCamera.ScreenPointToRay(_data.ScreenPosition);

            if (Physics.Raycast(r, out RaycastHit _info, Mathf.Infinity, entityLayer))
            {
                int clickedID = _info.transform.root.GetComponent<EntityController>().EntityID;
                Debug.Log($"Clicked on {clickedID}!");

                if (entityIDs.Contains(clickedID))
                    entityIDs.Remove(clickedID);
                else
                {
                    if (EntityMeetsFetchCriteria(clickedID))
                    {

                        entityIDs.Add(clickedID);
                    }
                }

                Debug.Log(entityIDs.Count);
            }
        }
    }

    static bool EntityMeetsFetchCriteria(int _entityID)
    {
        return true;
    }
}
