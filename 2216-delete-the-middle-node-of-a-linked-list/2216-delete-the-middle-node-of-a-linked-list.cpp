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
    ListNode* deleteMiddle(ListNode* head) {
        int len=0;
        ListNode *temp1 = head;

        while(temp1 != nullptr)
        {
            temp1 = temp1->next;
            len++;
        }
        int mid = (len/2);

        if(head == nullptr || head->next == nullptr)
            return nullptr;
        
        if(mid==0)
        {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        ListNode *temp = head;
        ListNode *prev = nullptr;
        int cnt=-1;

        while(temp != nullptr)
        {
            cnt++;
            if(cnt==mid)
            {
                prev->next = prev->next->next;
                delete temp;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
        return head;
    }
};