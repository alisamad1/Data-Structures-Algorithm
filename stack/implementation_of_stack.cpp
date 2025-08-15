#include<iostream>
using namespace std;
#include<stack>
class Stack {
    public:
    stack<int> st;
    // Function to push an element onto the stack
    int * arr;
    int top;
    int size;
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack Overflow. Cannot Push " << element << " onto the stack. " << endl;
        }
    }
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "Stack Underflow. Cannot pop from an empty stack. " << endl;
        }
    }
    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout << "Stack is empty. Cannot peek. " << endl;
            return -1; 
        }
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            cout << "Stack is not empty. " << endl;
            return false;
        }
    }
};
int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout << "The top element of the stack is : " << st.peek() << endl;
    st.pop();
    cout << "The top element of the stack after popping is : " << st.peek() << endl;
    if(st.isEmpty()){
        cout << "The stack is empty. " << endl;
    }
    else{
        cout << "The stack is not empty. " << endl;
    }
    return 0;
}