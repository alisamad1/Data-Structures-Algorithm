// Maximum Numbers of Vowels in a Substring in a given length.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isVowel(char ch){
    ch = toupper(ch);
    return ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch =='U';
}
int maxVowels(string s, int k){
    int n = s.length();
    int i  = 0;
    int j = 0;
    int count = 0;
    int maxV = 0;
    while(j<n){
        if(isVowel(s[j])){
            count++;
        }
        if(j-i+1 == k){
            maxV = max(maxV,count);
            if(isVowel(s[i])){
                count--;
            }
            i++;
        }
        j++;
    }
    return maxV;
}
int main(){
    string s = "leetcode";
    int k = 3;
    cout<<"The maximum number of vowels in a substring of given length is "<<maxVowels(s,k);
    return 0;
}