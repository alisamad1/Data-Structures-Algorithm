#include<iostream>
using namespace std;
int getlength(char word[]){
    int length = 0;
    int i = 0;
    while(word[i] != '\0'){
        length++;
        i++;
    }
    return length;
}

bool ischeckPalindrome(char word[]){
    int i= 0;
    int n = getlength(word);
    int j = n-1;
    while(i<=j){
        if(word[i] != word[j]){
            return false;
        }
        else{
            i++;
            j++;

        }
    }
    return true;
}
int main(){
    char word[100] = "naman";
    ischeckPalindrome(word);
    return 0;
}