class Solution {
public:
int maxSum(vector<string>& words, vector<char>& letters, vector<int>& score, vector<int>& count, int index) {
    
    if(index == words.size()){
        return 0;
    }
    
    int nowordincluded = 0 + maxSum(words,letters,score,count,index + 1) ;
    
    int currentscore = 0;
    string currentword = words[index];
    bool flag = true;
    for(int i = 0;i<currentword.length();i++){
        if((count[currentword[i] - 'a']) == 0){
            flag = false;
        }
        count[currentword[i] - 'a']--;
        currentscore +=  score[currentword[i] - 'a'];
    }

    int totalscore = 0;
    if(flag){
        totalscore = currentscore +  maxSum(words,letters,score,count,index + 1);
    }
    for(int i = 0;i<currentword.length();i++){
        count[currentword[i] - 'a']++;
    }


    return max(nowordincluded, totalscore);
}

int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
      vector<int> count(26, 0);
        for(char c : letters) {
            count[c - 'a']++;
        }
    return maxSum(words, letters, score, count, 0);
}
};