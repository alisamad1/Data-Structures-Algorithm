#include<iostream>
#include<vector>
using namespace std;
vector<long long> nextLargerElement(vector<long long> arr, int n){
    stack<long long> st;
    vector<long long>res(n);
    for(int i = n-1; i>=0; i--){
        long long currval = arr[i];
        while(!st.empty() && st.top()<=currval){
            st.pop();
        } 
        res[i] = st.empty() ?-1: st.top();
        st.push(currval);
    }
    return res;
}
int main(){
    
}