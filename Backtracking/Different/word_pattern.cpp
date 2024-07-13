 bool checkPattern(int index, string pattern, string s, unordered_map<char, string>& mpp) {
        if (index == pattern.length()) {
            return s.length() == 0;
        }

        char ch = pattern[index];
        if (mpp.find(ch) != mpp.end()) {
            string left = mpp[ch];
            if (s.length() >= left.length()) {
                string right = s.substr(0, left.length());
                if (left == right) {
                    string question = s.substr(left.length());
                    if (checkPattern(index + 1, pattern, question, mpp)) return true;
                } else {
                    return false;
                }
            }
        } else {
            for (int i = 0; i < s.length(); i++) {
                string prefix = s.substr(0, i + 1);
                string question = s.substr(i + 1);
                mpp[ch] = prefix;
                if (checkPattern(index + 1, pattern, question, mpp)) return true;
                mpp.erase(ch);
            }
        }

        return false;
    }

    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mpp;
        return checkPattern(0, pattern, s, mpp);
    }