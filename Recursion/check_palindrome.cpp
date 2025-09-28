// we will be writing a recursive function to check if a string is a palindrome or not
#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool checkPalindrome(string &str, int start, int end){
    if(start >= end){
        return true;
    }
    if(str[start] != str[end]){
        return false;
    }
    else{
        return checkPalindrome(str, start + 1, end - 1);
    }
}
int main(){
    string str;
    cout << "Enter the string: ";
    getline(cin , str);
    int n = str.length();
    if(checkPalindrome(str, 0, n-1)){
        cout << "The string is a Palindrome." << endl;
    }
    else{
        cout << "The string is not a Palindrome." << endl;
    }
    return 0;
}