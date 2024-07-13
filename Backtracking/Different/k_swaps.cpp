void findMax(string str, int k, string& maxstring, int& maxx) {
    int number = stoi(str);
    
    if (number > maxx) {
        maxx = number;
        maxstring = str;
    }
    
    if (k == 0) {
        return;
    }
    
    for (int i = 0; i < str.length() - 1; i++) {
        for (int j = i + 1; j < str.length(); j++) {
            if (str[i] < str[j]) {
                swap(str[i], str[j]);
                findMax(str, k - 1, maxstring, maxx);
                swap(str[i], str[j]); // Backtrack
            }
        }
    }
}

string findMaximumNum(string str, int k) {
    string maxstring = str;
    int maxx = stoi(str);
    findMax(str, k, maxstring, maxx);
    return maxstring;
}
    
    