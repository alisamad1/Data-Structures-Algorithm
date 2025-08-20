#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int>arr{1,2,3,4,5,6};
    vector<int>brr{3,3,4,9,10};
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        int element = arr[i];
        for(int j=0;j<brr.size();j++){
            if(element == brr[i]){
                ans.push_back(element);
            }
        }
    }
    for(auto value: ans){
        cout<<value<<" ";
    }
    cout<<endl;
}
 

