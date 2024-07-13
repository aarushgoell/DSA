int returnsum(const string& s, const unordered_map<char, int>& mpp) {
    int num = 0;
    for (char ch : s) {
        num = num * 10 + mpp.at(ch);
    }
    return num;
}

bool isLeadingZero(const string& s, const unordered_map<char, int>& mpp) {
    return s.length() > 1 && mpp.at(s[0]) == 0;
}

bool solution(int idx, vector<bool>& usednumber, unordered_map<char, int>& mpp, const vector<string>& words, const string& result, const string& uniqueString) {
    if (idx == uniqueString.length()) {
        int sum = 0;
        for (const string& word : words) {
            if (isLeadingZero(word, mpp)) return false;
            sum += returnsum(word, mpp);
        }
        if (isLeadingZero(result, mpp)) return false;
        int finalresult = returnsum(result, mpp);
        return sum == finalresult;
    }

    char ch = uniqueString[idx];
    for (int num = 0; num <= 9; num++) {
        if (!usednumber[num]) {
            usednumber[num] = true;
            mpp[ch] = num;
            if (solution(idx + 1, usednumber, mpp, words, result, uniqueString)) return true;
            usednumber[num] = false;
            mpp[ch] = -1;
        }
    }
    return false;
}

bool isSolvable(vector<string>& words, string result) {
    unordered_set<char> uniqueCharsSet;
    for (const string& word : words) {
        uniqueCharsSet.insert(word.begin(), word.end());
    }
    uniqueCharsSet.insert(result.begin(), result.end());

    string uniqueString(uniqueCharsSet.begin(), uniqueCharsSet.end());
    unordered_map<char, int> mpp;
    for (char ch : uniqueString) {
        mpp[ch] = -1;
    }

    vector<bool> usednumber(10, false);
    return solution(0, usednumber, mpp, words, result, uniqueString);
}