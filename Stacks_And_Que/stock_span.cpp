class StockSpanner {
public:

// https://leetcode.com/problems/online-stock-span/
      stack<int> stk;
      vector<int> arr = vector<int>(100000, 0);
       int i;
     StockSpanner() {
        i = 0;
    }
    
    int next(int price) {
        arr[i] = price;

        
        while (!stk.empty() && arr[stk.top()] <= price) {
            stk.pop();
        }

        int span;

        if (stk.empty()) {
            span = i + 1;
        } else {        
            span = i - stk.top();
        }

        stk.push(i);
        i++;
        
        return span;
    }


    
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */