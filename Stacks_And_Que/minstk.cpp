// Pepcoding method 

    // with constant space


   class MinStack {
    stack<long long> stk;
    long long Min;
public:
    MinStack(){
       
       Min = INT_MAX;
    

    }
    
    void push(int val) {
        long long value = val;
      if(stk.size() == 0){
        stk.push(value);
        Min = value;
      }
      else if(value >= Min){
        stk.push(value);
      }
      else{
        stk.push(value + (value - Min));
        Min = value;
      }      
    }
    
    void pop() {
        if(stk.size() == 0)return;
        long long el = stk.top();
        stk.pop();
        if(el < Min){
            Min = 2 * Min - el;
        }

    }
    int top() {
          if(stk.size() == 0)return -1;
          long long el = stk.top();
          if(el<Min)return Min;
          else{
            return el;
          }
    }
    
    int getMin() {
         return Min;
      
    }

 

};



// Striver method using pairs inside vectors


class MinStack {
public:
    MinStack() : to(-1),Minvalue(INT_MAX){
        
    }
    
    void push(int val) {
        if(to == -1) Minvalue = val;
         else{
            Minvalue = min(Minvalue,val);
         }
         to++;
         arr.push_back({val,Minvalue});
        
    }
    
    void pop() {
        if(to == -1)return;
        arr.pop_back();
        to--;
        if(to == -1){
            Minvalue = INT_MAX;
        }
        else{
            Minvalue = arr[to].second;
        }
    }
    int top() {
        if(to == -1)return -1;
        return arr[to].first;
    }
    
    int getMin() {
        
        return arr[to].second;
    }

    private:
    vector<pair<int,int>> arr;
    int to;
    int Minvalue;


};

/** 
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */


// Pepcoding method 

    MinStack(){
        
    }
    
    void push(int val) {
        allvars.push(val);
        if(minvars.empty() || val <= minvars.top()){
            minvars.push(val);
        }
        
    }
    
    void pop() {
     if(allvars.empty())return ;
     int upper = allvars.top();
     allvars.pop();
     if(upper == minvars.top())minvars.pop();

    }
    int top() {
      if(allvars.empty())return -1;
      return allvars.top();
    }
    
    int getMin() {
        if(minvars.empty())return -1;
        return minvars.top();
      
    }

    private:
    stack<int> allvars;
    stack<int> minvars;


};