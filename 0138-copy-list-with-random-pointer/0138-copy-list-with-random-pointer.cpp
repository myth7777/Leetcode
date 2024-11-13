/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        // ---------OPTIMAL APPROACH(insert in between nodes)---------
        Node *temp = head;

        while(temp!=NULL)
        {
            Node* newNode = new Node(temp->val);
            newNode->next = temp->next;
            temp->next = newNode;
            temp = temp->next->next;
        }

        temp = head;
        while(temp!=NULL)
        {
            if(temp->random == NULL)
                temp->next->random = NULL;
            else
                temp->next->random = temp->random->next;

            temp = temp->next->next;
        }

        temp = head;
        Node *dummy = new Node(-1);
        Node* temp2 = dummy;

        // dummy->next = temp->next;

        while(temp!=NULL)
        {
            temp2->next = temp->next;
            temp->next = temp->next->next;
            
            temp2 = temp2->next;
            temp = temp->next;
        }
        return dummy->next;

        // //--------USING HASHMAP----------
        // Node* temp = head;
        // map<Node*, Node*>mpp;

        // while(temp != NULL)
        // {
        //     Node* newNode = new Node(temp->val);
        //     mpp[temp] = newNode;
        //     temp = temp->next;
        // }

        // temp = head;
        // while(temp != NULL)
        // {
        //     mpp[temp]->next = mpp[temp->next];
        //     mpp[temp]->random = mpp[temp->random];

        //     temp = temp->next;
        // }
        
        // return mpp[head];
    }
};