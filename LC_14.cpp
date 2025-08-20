string longestCommonPrefix(vector<string>& strs) {
    if(strs.size() == 0){
        return "";}
    string  prefix = "";
    for(int i = 0; i<strs[0].length(); i++){
        char ch = strs[0][i];
        for(string s : strs){
            if(ch == s[i]){
                continue;
            }
            else{
                return prefix;
            }
        }
        prefix += ch;
    }    
    return prefix;
}