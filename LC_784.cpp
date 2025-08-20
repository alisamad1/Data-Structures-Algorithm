// Letter case Permutation in C++
#include<iostream>
#include<vector>
#include<cctype>
using namespace std;
vector<string> ans;
void solve(string curr, string s, int i){
    if(i == s.length()){
        ans.push_back(curr);
        return;
    }
    if(isdigit(s[i])){
        curr.push_back(s[i]);
        solve(curr,s,i+1);
    }
    else{
        string lower = curr + (char)tolower(s[i]);
        solve(lower, s, i+1);
        string upper = curr + (char)toupper(s[i]);
        solve(upper, s, i+1);
    }
}
vector<string> letterCasePermutation(string s){
    ans.clear();
    solve("", s, 0);
    return ans;
}
int main(){
    string input;
    cout<<"Enter the string: ";
    cin>> input;
    vector<string> permutation = letterCasePermutation(input);
    cout<<"letter case Permutation \n";
    for(const string& p: permutation){
        cout<<p<<endl;
    }
    return 0;
}
