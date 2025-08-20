//implentation of stack using queue
#include<iostream>
#include<queue>
using namespace std;
class MyStack {
    queue<int>q;
    public: 
    void push(int x){
        q.push(x);
        int n = q.size();
        for(int i = 0; i<n-1; i++){
            int value = q.front();
            q.pop();
            q.push(value);
        }
    }
    int pop(){
        if(q.empty()){
            cout<<"stack underflow. No elements to pop out"<<endl;
            return -1;
        }
        int value = q.front();
        q.pop();
        return value;
    }
    int top(){
        if(q.empty()){
            cout<<"Stack Underflow. No elements to pop out"<<endl;
            return -1;
        }
        return q.front();
    }
    int size(){
        return q.size();
    }
    bool isEmpty(){
        return q.empty();
    }
};
int main(){
    MyStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"Stack top "<<s.top()<<endl;
    cout<<"Stack Size "<<s.size()<<endl;
    cout<<"Popped Element "<<s.pop()<<endl;
    cout<<"Stack top after popping element "<<s.top()<<endl;
    return 0;
}