//Implementation of Queue using Stack
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class Queue{
    public:
    stack<int>in;
    stack<int>out;
    void push(int x){
        in.push(x);
    }
    int pop(){
        if(out.empty()){
            while(in.size())
            out.push(in.top());
            in.pop();
        }
        
    int x = pop.top();
    out.pop();
    return x;
    }
    int top(){
        if(out.empty()){
            while(in.size()){
                out.push(in.top());
                in.pop();
            }
        }
        return out.top();
    }
    int size(){
        return in.size()+out.size();
    }
}