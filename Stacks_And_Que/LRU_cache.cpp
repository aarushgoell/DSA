class node{
        public:
        int keyy;
        int vall;
        node* next;
        node* prev;
        node(int _key,int _val){
            keyy = _key;
            vall = _val;
        }
    };

    node* head = new node(-1,-1);
    node* tail = new node(-1,-1);

    int cap;
    unordered_map<int,node*> mpp;


    LRUCache(int capacity) {
     cap = capacity;
     head->next = tail;
     tail->prev = head;
    }

    void addNode(node* newnode){

         node* temp = head->next;
        newnode->next = temp;
        newnode->prev = head;
        head->next = newnode;
        temp->prev = newnode;

    }

    void deletenode(node* delenode){

        node* delenodenext = delenode->next;
        node* delenodeprev = delenode->prev;
        delenodeprev->next = delenodenext;
        delenodenext->prev = delenodeprev;

    }
    
    int get(int key) {
        if(mpp.find(key)!= mpp.end()){
            node* resnode = mpp[key];
            int res = resnode->vall;
            mpp.erase(key);
            deletenode(resnode);
            addNode(resnode);
            mpp[key] = head->next;
            return res;
        }
        else{
            return -1;
        }
    }
    
    void put(int key, int value) {
        if(mpp.find(key)!= mpp.end()){
             node* resnode = mpp[key];
            mpp.erase(key);
            deletenode(resnode);
        }
        if(mpp.size() == cap){
           mpp.erase(tail->prev->keyy);
           deletenode(tail->prev);
        }

        addNode(new node(key,value));
        mpp[key] = head->next;
    }