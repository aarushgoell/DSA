 string preToInfix(string pre_exp) {
        int n = pre_exp.length();
        stack<string> infix;
        
        for(int i = n-1;i>=0;i--){
            char ch = pre_exp[i];
            if(isalpha(ch) || isdigit(ch)){
                infix.push(string(1,ch));
            }
            else{
                string v1 = infix.top();
                infix.pop();
                string v2 = infix.top();
                infix.pop();
                string value = "(" + v1 + ch + v2 + ")";
                infix.push(value);
            }
        }
        
        return infix.top();
    }