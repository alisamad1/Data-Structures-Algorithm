#include<iostream>
#include<vector>
using namespace std;
int getsum(vector<int>& arr, int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int remainingpart = getsum(arr, n - 1);
    int sum = arr[n - 1] + remainingpart;
    return sum;
}
int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result = getsum(arr, n);
    cout << "The sum of the elements is: " << result << endl;
    return 0;
}