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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // ----------OPTIMIZED CODE-------------
        ListNode *t1 = headA;
        ListNode *t2 = headB;

        while(t1 != t2)
        {
            t1 = t1->next;
            t2 = t2->next;

            if(t1 == t2)
                return t1;
            
            if(t1 == NULL)
                t1 = headB;
            
            if(t2 == NULL)
                t2 = headA;
        }
        return t1;
        
        
        // // ----------DIFFERENCE IN LENGTH-----------
        // ListNode *t1 = headA;
        // ListNode *t2 = headB;
        // int n1=0, n2=0;
        // while(t1 != NULL)
        // {
        //     n1++;
        //     t1 = t1->next;
        // }
        // while(t2 != NULL)
        // {
        //     n2++;
        //     t2 = t2->next;
        // }
        // t1 = headA;
        // t2 = headB;
        // int d;
        // if(n2>n1)
        // {
        //     d = n2-n1;
        //     while(d--)
        //         t2 = t2->next;
        // }
        // else
        // {
        //     d = n1-n2;
        //     while(d--)
        //         t1=t1->next;
        // }

        // while(t1 != NULL)
        // {
        //     if(t1 == t2)
        //         return t1;
        //     t1 = t1->next;
        //     t2 = t2->next;
        // }
        // return NULL;


        // ----------USING MAP---------
        // map<ListNode*, int>mpp;
        // ListNode *temp1 = headA;
        // ListNode *temp2 = headB;

        // while(temp1 != NULL)
        // {
        //     mpp[temp1]++;
        //     temp1 = temp1->next;
        // }

        // while(temp2 != NULL)
        // {
        //     if(mpp.find(temp2)!=mpp.end())
        //     {
        //         return temp2;
        //     }
        //     temp2 = temp2->next;
        // }
        // return NULL;
    }
};