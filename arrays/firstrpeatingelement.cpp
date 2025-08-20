#include<iostream>
#include<vector>
using namespace std;
int firstElementRepeating(int arr[], int n){
    for(int i = 0; i<n; i++){
        bool isrepeated = false;
        for(int j = i + 1; j<n; j++){
             if(arr[i] == arr[j]){
                isrepeated = true;
                return i + 1;
             }
        }
        return -1;  
    }
}
int main (){
    int n;
    int arr[] = {1,3,5,3,6,2,5};
    int repeatingelement_1 = firstElementRepeating(arr,n);
    cout<<"the first repeating element is "<<repeatingelement_1;
    return 0;
}