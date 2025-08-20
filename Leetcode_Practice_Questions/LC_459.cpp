#include <iostream>
#include <string>
using namespace std;
bool repeatedsubstring(string s){
    string doubled = s + s;
    return doubled.substr(1, doubled.size() - 2).find(s) != string::npos;
}
int main(){
    string input;
    cout<<"enter the string you want to check: ";
    cin >> input;
    bool result = repeatedsubstring(input);
    if(result){
        cout<<"The substring can be repeated and can make the original substring"<<endl;
    }
    else{
        cout<<"The substring can not be repeated and cant make the original string"<<endl;
    }
    return 0;
}