#include<iostream>
using namespace std;
bool checkPalindrome(string str, int start, int end){
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
    string name = "Ali Samad";
    cout << endl;
    bool isPalindrome = checkPalindrome(name , 0, name.length() - 1);
    if(isPalindrome){
        cout << "The string is a palindrome" << endl;
    }
    else{
        cout << "The string is not a palindrome" << endl;
    }
    return 0;
}