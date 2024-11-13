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
    // ListNode *convert(vector<int>arr)
    // {
    //     int n = arr.size();
    //     if (n == 0) return nullptr;
    //     ListNode *head = new ListNode(arr[0]);
    //     ListNode *temp = head;

    //     for(int i=1; i<n; i++)
    //     {
    //         ListNode *newNode = new ListNode(arr[i]);
    //         temp->next = newNode;
    //         temp = temp->next;
    //     }
    //     return head;
    // }

    // ListNode* merge(ListNode* head1, ListNode* head2)
    // {
    //     ListNode* temp1 = head1;
    //     ListNode* temp2 = head2;
    //     ListNode* dummy = new ListNode(-1);
    //     ListNode* temp = dummy;

    //     while(temp1 != NULL && temp2 != NULL)
    //     {
    //         if(temp1->val < temp2->val)
    //         {
    //             temp->next = temp1;
    //             temp = temp->next;
    //             temp1 = temp1->next;        
    //         }
    //         else
    //         {
    //             temp->next = temp2;
    //             temp = temp->next;
    //             temp2 = temp2->next;
    //         }
    //     }
    //     if(temp1) temp->next = temp1;
    //     if(temp2) temp->next = temp2;

    //     return dummy->next;
    // }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // ---------USING PRIORITY QUEUE--------------
        if (lists.empty()) return nullptr;
        priority_queue<pair<int, ListNode*>,vector<pair<int, ListNode*>>, greater<pair<int, ListNode*>>> minHeap;

        for(int i=0; i<lists.size(); i++)
        {
            if(lists[i])
                minHeap.push({lists[i]->val, lists[i]});
        }
        
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;

        while(!minHeap.empty())
        {
            pair<int, ListNode*>p = minHeap.top();
            temp->next = p.second;
            minHeap.pop();

            if(p.second->next)
                minHeap.push({p.second->next->val, p.second->next});

            temp = temp->next;
        }
        return dummy->next;
        // // ---------OPTIMAL APPROACH------------
        // if (lists.empty()) return nullptr;
        // ListNode *head = lists[0];
        // for(int i=1; i<lists.size(); i++)
        // {
        //     head = merge(head, lists[i]);
        // }
        // return head;


        // //--------BRUTE FORCE-----------
        // vector<int>arr;
        // int n = lists.size();

        // for(int i=0; i<n; i++)
        // {
        //     ListNode *temp = lists[i];
        //     while(temp != NULL)
        //     {
        //         arr.push_back(temp->val);
        //         temp = temp->next;
        //     }
        // }

        // sort(arr.begin(), arr.end());

        // return convert(arr);
    }
};