#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
// sort vowels in a string
bool isVowel(char c){
    return string("AEIOUaeiou").find(c) != string::npos;
}
string sortvowels(string s){
    vector<char> vowels;
    for(char c : s){
        if(isVowel(c)){
            vowels.push_back(c);
        }
    }
    sort(vowels.begin(), vowels.end());
    int v_index = 0;
    for(int i = 0; i < s.size(); i++){
        if(isVowel(s[i])){
            s[i] = vowels[v_index];
            v_index++;
        }
    }
    return s;
}
int main(){
    string s;
    cout << "Enter the string: ";
    getline(cin, s);
    cout << "Sorted vowels string: " << sortvowels(s) << endl;
    return 0;
}