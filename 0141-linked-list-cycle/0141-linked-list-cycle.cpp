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
    bool hasCycle(ListNode *head) {
        // -------USING FAST & SLOW POINTERS-------
        ListNode *fast = head;
        ListNode *slow = head;

        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)
                return true;
        }
        return false;


        // // -------USING HASMAP-------
        // ListNode* temp = head;
        // map<ListNode*, int>mpp;

        // while(temp != NULL)
        // {
        //     if(mpp.find(temp) != mpp.end())
        //         return true;
        //     mpp[temp]++;
        //     temp = temp->next;
        // }
        // return false;
    }
};