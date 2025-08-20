#include <iostream>
#include <vector>
using namespace std;
long maximumsum(vector<long> a, int m){
    long long maxmodsum = 0;
    int n = a.size();
    for(int i = 0 ; i < n ; i++){
        long long currsum = 0;
        for(int j = i ; j < n; j++){
            currsum += a[j];
            long long modsum = currsum % m;
            maxmodsum = max(maxmodsum, modsum);
        }
    }
    return maxmodsum;
}
int main(){
    int n ;
    long m;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;
    vector <long> arr(n);
    cout << "Enter " << n << "elements: " <<endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter the value of m: "<<endl;
    cin >> m;
    long result = maximumsum(arr, m);
    cout<<"The maximum subarray sum modulo to m would be " << result << endl;
    return 0;
}