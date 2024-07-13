string preToPost(string pre_exp) {
        int n = pre_exp.length();
        stack<string> postfix;
        
        for(int i = n-1;i>=0;i--){
            char ch = pre_exp[i];
            if(isalpha(ch) || isdigit(ch)){
                postfix.push(string(1,ch));
            }
            else{
                string v1 = postfix.top();
                postfix.pop();
                string v2 = postfix.top();
                postfix.pop();
                string value = v1 + v2 + ch;
                postfix.push(value);
            }
        }
        
        return postfix.top();
    }