// Using two stacks TC: O(1) as at some instance only we are moving elements of stk1 to stk2; ans Sc : O(n);



class MyQueue {
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        stk1.push(x);

    }
    
    int pop() {
        if(stk2.empty()){
          if(stk1.empty())return -1;
           while(!stk1.empty()){
            stk2.push(stk1.top());
            stk1.pop();
           }
        }
        int element = stk2.top();
        stk2.pop();
        return element;

    }
    
    int peek() {
         if(stk2.empty()){
          if(stk1.empty())return -1;
            while(!stk1.empty()){
            stk2.push(stk1.top());
            stk1.pop();
           }
        }
        return stk2.top();
    }
    
    bool empty() {
        if(stk1.empty() && stk2.empty())return true;
        return false;
    }

    private: 
    stack<int> stk1;
    stack<int> stk2;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */


// Other method for this TC is O(n) ans sc is also same 

    MyQueue() {
        
    }
    
    void push(int x) {
         while(!stk1.empty()){
            stk2.push(stk1.top());
            stk1.pop();
           }
        stk1.push(x);
         while(!stk2.empty()){
            stk1.push(stk2.top());
            stk2.pop();
           }


    }
    
    int pop() {
        if(stk1.empty())return -1;
        int element  = stk1.top();
        stk1.pop();
        return element;

    }
    
    int peek() {
         if(stk1.empty())return -1;
          return stk1.top();
    }
    
    bool empty() {
        return stk1.empty();
    }

    private: 
    stack<int> stk1;
    stack<int> stk2;
};