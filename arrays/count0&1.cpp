#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr = {0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0};
    int size = 15;
    int numZero = 0;
    int numOne = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            numZero++;
        } else if(arr[i] == 1){
            numOne++;
        } else {
            cout << "Unexpected value in array at index: " << i << endl;
        }

    }
    cout << "The size of the array is: " << size << endl;
    cout << "The total number of zeros in the array is: " << numZero << endl;
    cout << "The total number of ones in the array is: " << numOne << endl;
    return 0;
}
