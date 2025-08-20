#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{10,20,70,60,40};
    int sum = 200;
    for(int i = 0; i<arr.size();i++){
        int element = arr[i];
        for(int j = i+1; j <arr.size();j++){
            if(element + arr[j] == sum){
                cout<<"Pair Found as   " << element<<", "<<arr[j]<<endl;
            }
        }
    }
    cout<<"Pair Not Found for this Sum" << endl;
}