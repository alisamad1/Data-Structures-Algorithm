int maxConsecutiveAnswers(string answerKey, int k) {
    int n = answerKey.length();
    int result = 0;
    int i = 0, j = 0;
    int countF = 0;
    while(j < n) {
        if(answerKey[j] == 'F')
            countF++;
        while(countF > k) {
            if(answerKey[i] == 'F')
                countF--;
            i++;
        }
        result = max(result, j-i+1);   
        j++;
    }
    i = 0, j = 0;
    int countT = 0;
    while(j < n) {
        if(answerKey[j] == 'T')
            countT++;
        while(countT > k) {
            if(answerKey[i] == 'T')
                countT--;
            i++;
        }   
        result = max(result, j-i+1);
        j++;
    }    
    return result;
}