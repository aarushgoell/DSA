string removeKdigits(string num, int k){
        int n = num.length();
         if(k >= n)return "0";
         stack<char> stk;
         for(char ch :  num){
            while(k > 0 && stk.size() > 0 && stk.top()>ch){
                stk.pop();
                k--;
            }
            if(stk.empty() && ch == '0'){
                continue;
            }
            else{
                stk.push(ch);
            }
        }

        while(k > 0 && !stk.empty()){
            stk.pop();
            k--;
        }

        if(stk.empty())return "0";

        string ans = "";
        while(!stk.empty()){
            ans += stk.top();
            stk.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
        

    }