/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // //--------------USING FAST & SLOW POINTER-----------------
        // if(head == NULL || head->next == NULL)
        //     return NULL;
        
        ListNode *fast = head;
        ListNode *slow = head;
        
        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;

            if(fast == slow)
            {
                slow = head;
                while(fast != slow)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }
        return NULL;
        // //--------------USING HASHING----------------
        // if(head == NULL || head->next == NULL)
        //     return NULL;
        
        // map<ListNode*, int>mpp;

        // ListNode *temp = head;

        // while(temp!=NULL)
        // {
        //     if(mpp.find(temp)!=mpp.end())
        //     {
        //         return temp;
        //     }
        //     mpp[temp]++;
        //     temp = temp->next;
        // }
        // return NULL;
    }
};