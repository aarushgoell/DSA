    string postToPre(string post_exp) {
          int n = post_exp.length();
          stack<string> prefix;
        
          for(int i = 0;i<n;i++){
            char ch = post_exp[i];
            if(isalpha(ch) || isdigit(ch)){
                prefix.push(string(1,ch));
            }
            else{
                string v2 = prefix.top();
                prefix.pop();
                string v1 = prefix.top();
                prefix.pop();
                string value = ch + v1 + v2;
                prefix.push(value);
            }
         }
        
        return prefix.top();
    }