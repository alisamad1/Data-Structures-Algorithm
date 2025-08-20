#include<iostream>
using namespace std;
void reverseHelper(string &str, int start , int end){
    if(start >= end){
        return;
    }
    swap(str[start], str[end]);
    start++;
    end--;
    reverseHelper(str, start, end);
}
string reverseString(string str){
    reverseHelper(str, 0, str.length() - 1);
    return str;
}
int  main(){
    string name;
    cout << "Enter the string to reverse : " << endl;
    getline(cin ,name);
    cout << "The revese of the string " << name  << " is: " << reverseString(name) << endl;
    return 0;
}