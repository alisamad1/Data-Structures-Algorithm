#include<iostream>
#include <vector>
using namespace std;
//Dutch National Flag Algorithm
void moveallnegativetoleft(int* a, int n){
    int low = 0, high = n - 1;
    while (low<high){
        if(a[low]< 0){
            low++;
        }
        else if(a[high] > 0){
            high --;
        }
        else{
             swap(a[low],a[high]);
        }
    }
    
}
 int main(){
    int a[]= {1,2,-3,4,-5,6};
    int n = sizeof(a)/sizeof(int);
    moveallnegativetoleft(a,n); 
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
 }