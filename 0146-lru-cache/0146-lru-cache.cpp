class Node{
public:
    int key, val;
    Node *next;
    Node *prev;

    Node(int _key, int _val){
        this->key = _key;
        this->val = _val;
    }
};

class LRUCache {
public:
    void insertAfterHead(Node *temp)
    {
        Node *headNext = head->next;
        head->next = temp;
        headNext->prev = temp;
        temp->next = headNext;
        temp->prev = head;
    }
    void deleteNode(Node *temp)
    {
        Node *tempNext = temp->next;
        Node *tempPrev = temp->prev;

        tempPrev->next = tempNext;
        tempNext->prev = tempPrev;
    }

    int cap;
    map<int, Node*>mpp;

    Node *head = new Node(-1,-1);
    Node *tail = new Node(-1,-1);

    LRUCache(int capacity) {
        this->cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if(mpp.find(key) == mpp.end())
            return -1;

        Node *temp = mpp[key];
        int res = temp->val;

        deleteNode(temp);
        insertAfterHead(temp);
        
        return res;
    }
    
    void put(int key, int value) {
        if(mpp.find(key) != mpp.end())
        {
            Node *temp = mpp[key];
            temp->val = value;

            deleteNode(temp);
            insertAfterHead(temp);
        }
        else
        {
            if(mpp.size() == cap)
            {
                mpp.erase(tail->prev->key);
                deleteNode(tail->prev);
            }
            Node *newNode = new Node(key, value);
            mpp[key] = newNode;
            insertAfterHead(newNode);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */