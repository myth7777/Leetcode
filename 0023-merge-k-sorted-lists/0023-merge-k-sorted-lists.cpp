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
    ListNode *convert(vector<int>arr)
    {
        int n = arr.size();
        if (n == 0) return nullptr;
        ListNode *head = new ListNode(arr[0]);
        ListNode *temp = head;

        for(int i=1; i<n; i++)
        {
            ListNode *newNode = new ListNode(arr[i]);
            temp->next = newNode;
            temp = temp->next;
        }
        return head;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>arr;

        int n = lists.size();

        for(int i=0; i<n; i++)
        {
            ListNode *temp = lists[i];
            while(temp != NULL)
            {
                arr.push_back(temp->val);
                temp = temp->next;
            }
        }

        sort(arr.begin(), arr.end());

        return convert(arr);
    }
};