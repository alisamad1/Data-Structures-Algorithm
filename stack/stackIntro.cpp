#include<iostream>
using namespace std;
#include<stack>
int main(){
    stack<int> st;
    // pushing elements to stack
    st.push(1);
    st.push(2);
    st.push(3);
    // lets check the top element
    cout << "The top element of the stack is : " << st.top() << endl;
    // lets pop the element on the top
    st.pop();
    cout << "The top element of the stack after popping is : " << st.top() << endl;
    if(st.empty()){
        cout << "The stack is empty. " << endl;
    }
    else{
        cout << "The stack is not empty. " << endl;
    }
    cout << "The size of the stack is : " << st.size() << endl;
    return 0;
}