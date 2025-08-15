#include<iostream>
#include<stack>
using namespace std;
// we will be using stack to reverse a string
string reverseString(string &str){
    stack<char> st;
    for(int i = 0; i < str.length(); i++){
        st.push(str[i]);
    }
    string ans = "";
    while(!st.empty()){
        char ch = st.top();
        ans += ch;
        st.pop();
    }
    return ans;
}
int main(){
    string str;
    cout << "Enter a string to reverse: ";
    getline(cin, str);
    string result = reverseString(str);
    cout << "Reversed String: " << result << endl;
    return 0;
}