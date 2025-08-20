#include<iostream>
#include<vector>
using namespace std;
vector<int> subarray_sum(vector<int>& A, int B){
    int n = A.size();
    int sum = 0;
    for(int i =0; i<n; i++){
        for(int j = i; j<n; j++){
            sum += A[j];
            if(sum == B){
                return vector<int> (A.begin() + i, A.begin() + j + 1);
            }
        }
    }
    return{-1};
}
int main(){
    vector<int> A = {-1,2,3,-4,6,7,9};
    int B = 5;
    vector<int> result = subarray_sum(A,B);
    for(int num: result){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}