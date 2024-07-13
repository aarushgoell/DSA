int precedence(char prec) {
        if (prec == '+' || prec == '-') {
            return 1;
        }
        else if(prec == '*' || prec == '/'){
            return 2;
        }
        return 0;
    }

    int operation(int v1, int v2, char opr){
        if (opr == '+') {
            return v1 + v2;
        }else if(opr == '-') {
            return v1 - v2;
        }
        else if(opr == '*') {
            return v1 * v2;
        }
        else{
            return v1 / v2;
        }
    }

    int calculate(std::string s) {
        int n = s.length();
        std::stack<int> operands;
        std::stack<char> operators;

        for (int i = 0; i < n; i++) {
            char ch = s[i];

            if (ch == ' ') {
                continue;  // Ignore spaces
            }

            if (isdigit(ch)) {
                int num = 0;
                while (i < n && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                i--;  // Adjust for the next iteration
                operands.push(num);
            } else if (ch == '(') {
                operators.push(ch);
            } else if (ch == ')') {
                while (!operators.empty() && operators.top() != '(') {
                    char opr = operators.top();
                    operators.pop();
                    int v2 = operands.top();
                    operands.pop();
                    int v1 = operands.top();
                    operands.pop();
                    int result = operation(v1, v2, opr);
                    operands.push(result);
                }
                operators.pop();  // Pop the '('
            } else if (ch == '+' || ch == '-' || ch == '/' || ch == '*') {
                while (!operators.empty() && precedence(operators.top()) >= precedence(ch)) {
                    char opr = operators.top();
                    operators.pop();
                    int v2 = operands.top();
                    operands.pop();
                    int v1 = operands.top();
                    operands.pop();
                    int result = operation(v1, v2, opr);
                    operands.push(result);
                }
                operators.push(ch);
            }
        }

        while (!operators.empty()) {
            char opr = operators.top();
            operators.pop();
            int v2 = operands.top();
            operands.pop();
            int v1 = operands.top();
            operands.pop();
            int result = operation(v1, v2, opr);
            operands.push(result);
        }

        return operands.top();
    }