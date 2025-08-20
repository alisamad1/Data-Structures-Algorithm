#include<iostream>
#include<vector>
#include<stack>
#include<climits>
using namespace std;
vector<int> nextsmallerelement(vector<int> & arr, int n){
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);
    for(int i = n-1; i >= 0; i--){
        int curr = arr[i];
        while(st.top() != -1 && arr[st.top()] >= curr){  
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);  
    }
    return ans;
}
vector<int> prevsmallerelement(vector<int> & arr, int n){
    stack<int> st;
    st.push(-1);
    vector<int> ans(n); 
    for(int i = 0; i < n; i++){
        int curr = arr[i];
        while(st.top() != -1 && arr[st.top()] >= curr){  
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);  
    }
    return ans;
}
int largestareainhistogram(vector<int> & heights){
    int n = heights.size();
    vector<int> next(n);
    next = nextsmallerelement(heights, n);
    vector<int> prev(n);
    prev = prevsmallerelement(heights, n);
    int area = 0;  
    for(int i = 0; i < n; i++){
        int l = heights[i];
        if(next[i] == -1){
            next[i] = n;
        }
        int b = next[i] - prev[i] - 1;
        int newarea = l * b;
        area = max(area, newarea);
    }
    return area;
}
int main(){
    int n;
    cout << "Enter the Number of Elements: " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;
    int result = largestareainhistogram(arr);
    cout << "The largest area of the histogram is: " << result << endl;
    return 0;
}