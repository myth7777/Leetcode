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
    ListNode *reverse(ListNode *head)
    {
        ListNode *temp = head;
        ListNode *prev = NULL;

        while(temp != NULL)
        {
            ListNode *front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        // --------SLOW & FAST----------
        ListNode *slow = head;
        ListNode *fast = head;

        while(fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *newHead = reverse(slow->next);

        ListNode *first = head;
        ListNode *second = newHead;

        while(second != NULL)
        {
            if(first->val != second->val)
            {
                reverse(newHead);
                return false;
            }
            
            first = first->next;
            second = second->next;
        }
        reverse(newHead);
        return true;

        // --------USING STACK----------
        // ListNode *temp = head;
        // stack<int>st;

        // while(temp!=NULL)
        // {
        //     st.push(temp->val);
        //     temp = temp->next;
        // }

        // temp = head;
        // while(temp!=NULL)
        // {
        //     if(temp->val != st.top())
        //         return false;
        //     st.pop();
        //     temp = temp->next;
        // }
        // return true;
    }
};