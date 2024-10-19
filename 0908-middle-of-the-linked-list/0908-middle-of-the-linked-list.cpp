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
    ListNode* middleNode(ListNode* head) {
        // ------------TORTOISE AND HARE APPROACH(SLOW FAST POINTER)----------------
        ListNode *fast = head;
        ListNode *slow = head;
        
        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }

        return slow;


        // ------------ITERATIVE APPROACH---------------
        // int cnt=0, mid;
        // ListNode *temp = head;

        // if(head == NULL || head->next == NULL)
        //     return head;
        // while(temp != NULL)
        // {
        //     cnt++;
        //     temp = temp->next;
        // }
        
        // mid = cnt/2 + 1;
        // temp = head;
        // cnt = 0;

        // while(temp != NULL)
        // {
        //     cnt++;
        //     if(mid == cnt)
        //         break;
        //     temp = temp->next;
        // }
        // return temp;   
    }
};