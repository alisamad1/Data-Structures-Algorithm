// we will be writing the code for Find Words that can be formed by the Characters. (Leetcode #1160)
int countCharacters(vector<string>& words, string chars) {
    // Create a frequency map of the available characters.
    vector<int> charsFreq(26, 0);
    for(char &ch : chars){
        charsFreq[ch - 'a']++;
    }

    int result = 0;
    for(string &word : words){
        vector<int> wordFreq(26, 0);
        for(char &ch : word){
            wordFreq[ch - 'a']++;
        }

        bool canFormWord = true;
        for(int i = 0; i<26; i++){
            if(wordFreq[i] > charsFreq[i]){
                canFormWord = false;
                break;
            }
        }
        if(canFormWord){
            result += word.length();
        }
    }
    return result;
}
