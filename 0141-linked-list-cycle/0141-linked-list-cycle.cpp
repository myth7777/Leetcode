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
        // without using hashMap or fast-slow pointer
        if(head == NULL || head->next == NULL)
            return false;
        ListNode *curr = head;

        while(curr->next != NULL)
        {
            if(curr->next == head)  
                return true;

            ListNode *nextNode = curr->next;
            curr->next = head;
            curr = nextNode;
        }
        return false;
        // // -------USING FAST & SLOW POINTERS-------
        // ListNode *fast = head;
        // ListNode *slow = head;

        // while(fast != NULL && fast->next != NULL)
        // {
        //     fast = fast->next->next;
        //     slow = slow->next;
        //     if(fast == slow)
        //         return true;
        // }
        // return false;


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