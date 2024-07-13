int minRemovalCount(string s) {
    stack<char> stk;
    for (char c : s) {
        if (c == '(') {
            stk.push('(');
        } else if (c == ')') {
            if (!stk.empty() && stk.top() == '(') {
                stk.pop();
            } else {
                stk.push(')');
            }
        }
    }
    return stk.size();
}

void printParenthesis(string s, int min, vector<string>& ans, unordered_set<string>& st) {
    if (min == 0) {
        if (minRemovalCount(s) == 0 && st.find(s) == st.end()) {
            ans.push_back(s);
            st.insert(s);
        }
        return;
    }

    for (int i = 0; i < s.length(); ++i) {
        string left = s.substr(0, i);
        string right = s.substr(i + 1);
        string middleRemove = left + right;
        printParenthesis(middleRemove, min - 1, ans, st);
    }
}

vector<string> removeInvalidParentheses(string s) {
    vector<string> ans;
    int min = minRemovalCount(s);
    unordered_set<string> st;
    printParenthesis(s, min, ans, st);
    return ans;
}