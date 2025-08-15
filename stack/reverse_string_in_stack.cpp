#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str = "ALI";
    stack<char> st;
    for(int i = 0; i < str.length(); i++){
        st.push(str[i]);
    }
    string ans = " ";
    while(!st.empty()){
        char ch = st.top();
        ans += ch;
        st.pop();
    }
    cout << "The Reversed String is : " << ans << endl;
    return 0;
}