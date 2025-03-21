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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next == NULL)
            return head;
        
        ListNode *tail = head;
        int len = 1;

        while(tail->next != NULL)
        {
            tail = tail->next;
            len++;
        }

        if(k%len == 0)
            return head;

        tail->next = head;

        k = k%len;

        ListNode *temp = head;

        int cnt = len-k;
        while(cnt>1)
        {
            temp=temp->next;
            cnt--;
        }
        head = temp->next;
        temp->next = NULL;

        return head;
    }
};