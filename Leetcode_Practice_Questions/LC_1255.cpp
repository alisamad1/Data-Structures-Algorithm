int maxScore;
    int n;
    void solve(int i, vector<int>& score, vector<string>& words, int currScore, vector<int>& freq){
        maxScore = max(maxScore, currScore);
        if(i>=n){
            return;
        }
        int j = 0;
        int tempScore = 0;
        vector<int> tempfreq = freq;
        while(j<words[i].length()){
            char ch= words[i][j];
            tempfreq[ch-'a']--;
            tempScore += score[ch-'a'];
            if(tempfreq[ch-'a']<0){
                break;
            }
            j++;
        }
        if(j == words[i].length()){
            solve(i+1,score, words,currScore + tempScore, tempfreq);
        }
        solve(i+1, score, words, currScore, freq);
    }
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        vector<int>freq(26,0);
        maxScore = INT_MIN;
        for(char &ch: letters){
            freq[ch-'a']++;
        }
        n = words.size();
        solve(0,score,words,0,freq);
        return maxScore;
    }