void process(stack<char> &operators,stack<string>& poststack){
                 char opr = operators.top();
                 string v2 = poststack.top();
                 poststack.pop();
                 string v1 = poststack.top();
                 poststack.pop();
                 poststack.push(v1 + v2 + opr);
                 operators.pop();
          }
    
    int precedence(char ch){
        if(ch == '^')return 3;
        else if(ch == '/' || ch == '*')return 2;
        else{
            return 1;
        }
    }
    
    string infixToPostfix(string s) {
        int n = s.length();
        stack<string> poststack;
        stack<char> operators;
        
        for(int i = 0;i<n;i++){
            char ch = s[i];
            
            if(ch == '('){
                operators.push('(');
            }
            else if(ch == ')'){
                while(operators.top() != '('){
                    process(operators,poststack);
                }
                operators.pop();
            }
            else if(isalpha(ch) || isdigit(ch)){
                poststack.push(string(1, ch));
            }
            else if(ch == '^' || ch == '+'  || ch == '-'  || ch == '/'  || ch == '*'){
                while(!operators.empty() && operators.top() != '(' && precedence(ch)<= precedence(operators.top())){
                     process(operators,poststack);
                }
                operators.push(ch);
            }
            
        }
        
        while(!operators.empty()){
              process(operators,poststack);
        }
        
        return poststack.top();
    }