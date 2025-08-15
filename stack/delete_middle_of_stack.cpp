#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>& inputstack, int count, int N){
    if(count == N/2){
        inputstack.pop();
        return;
    }
    int num = inputstack.top();
    inputstack.pop();
    solve(inputstack, count + 1, N);
    inputstack.push(num);
}
void deleteMiddle(stack<int>& inputstack, int N){
    int count = 0;
    solve(inputstack, count, N);
}
int main(){
    stack<int> inputstack;
    inputstack.push(1);
    inputstack.push(2);
    inputstack.push(3);
    inputstack.push(4);
    inputstack.push(5);
    int N = inputstack.size();
    cout << "Stack before deleting middle element: ";
    stack<int> temp = inputstack;
    while(!temp.empty()){
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl; 
    deleteMiddle(inputstack, N);
    cout << "Stack after deleting middle element: ";
    while(!inputstack.empty()){
        cout << inputstack.top() << " ";
        inputstack.pop();
    }
    cout << endl;
    return 0;
}