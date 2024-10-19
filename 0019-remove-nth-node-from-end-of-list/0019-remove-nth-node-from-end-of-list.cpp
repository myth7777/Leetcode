/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // FAST and SLOW pointer
        ListNode *fast = head;
        for(int i=0; i<n; i++)
            fast = fast->next;

        if(fast == NULL)
            return head->next;

        ListNode *slow = head;

        while(fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        ListNode *delNode = slow->next;
        slow->next = slow->next->next;
        delete delNode;

        return head;        

        // brute Forece
        // if(head == NULL)
        //     return NULL;
        
        // int cnt=0;
        // ListNode *temp = head;

        // while(temp != NULL)
        // {
        //     cnt++;
        //     temp = temp->next;
        // }

        // if(n==cnt)
        // {
        //     ListNode *newHead = head->next;
        //     delete head;
        //     return newHead;
        // }
        // int res = cnt - n;
        // temp = head;
        // while(temp!=NULL)
        // {
        //     res--;
        //     if(res == 0)
        //         break;
        //     temp = temp->next;
        // }

        // ListNode *delNode = temp->next;
        // temp->next = temp->next->next;
        // delete delNode;

        // return head;
    }
};