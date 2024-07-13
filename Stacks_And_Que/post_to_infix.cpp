 string postToInfix(string exp) {
        int n = exp.length();
        stack<string> infix;
        
        for(int i = 0;i<n;i++){
            char ch = exp[i];
            if(isalpha(ch) || isdigit(ch)){
                infix.push(string(1,ch));
            }
            else{
                string v2 = infix.top();
                infix.pop();
                string v1 = infix.top();
                infix.pop();
                string value = "(" + v1 + ch + v2 + ")";
                infix.push(value);
            }
        }
        
        return infix.top();
    }