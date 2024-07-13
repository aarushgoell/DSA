// THis is the implementation using two queue
  
// Time and space complexity of both methods are same which O(n) and O(n)

class MyStack {
public:
    MyStack() {
        
    }
    
    
    void push(int x) {
       q2.push(x);
       while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
       }

       q1.swap(q2);

    }
    
    int pop() {
        if(q1.empty())return -1;
        int element = q1.front();
        q1.pop();
        return element;
    }
    
    int top() {
         if(q1.empty())return -1;
         return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }

    private:
    queue<int> q1;
    queue<int> q2;

};



// THis is the implementation using single queue




#include <iostream>
#include <queue>

class MyStack {
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        for (int i = 0; i < q.size() - 1; ++i) {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        if (q.empty()) return -1;
        int element = q.front();
        q.pop();
        return element;
    }
    
    int top() {
        if (q.empty()) return -1;
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }

private:
    std::queue<int> q;
};

int main() {
    MyStack stack;
    
    stack.push(1);
    stack.push(2);
    std::cout << "Top element is: " << stack.top() << std::endl; // Output: 2
    std::cout << "Popped element is: " << stack.pop() << std::endl; // Output: 2
    std::cout << "Stack is empty: " << (stack.empty() ? "Yes" : "No") << std::endl; // Output: No
    std::cout << "Top element is: " << stack.top() << std::endl; // Output: 1
    
    return 0;
}
