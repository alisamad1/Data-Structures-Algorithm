#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
queue<int> reversequeue(queue<int>& q){
    stack<int> s;
    while(!q.empty()){
        int element = q.front();
        q.pop();
        q.push(element);
    }
    while(!s.empty()){
        int element = s.top();
        s.pop();
        s.push(element);
    }
    return q;
}
int main(){
    // 4 3 1 10 2 6
    queue<int> q;
    q.push(4);
    q.push(3);
    q.push(1);
    q.push(10);
    q.push(2);
    q.push(6);
    queue<int> ans = reversequeue(q);
    while(!ans.empty()){
        cout << ans.front() << " ";
    }
    cout << endl;
    return 0;
}