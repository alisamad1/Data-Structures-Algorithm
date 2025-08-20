#include<iostream>
#include<vector>
using namespace std;
// int main(){
//     int arr[3][3] = {{2,4,6},{8,1,3},{5,7,6}};
//     for(int i = 0; i<3; i++){
//         for(int j =0; j<3; j++){
//             cout<<arr[i][j]<<" ";
//         } 
//         cout<<endl;  
//     }
// }
// int main(){
//     int arr[3][3] = {{2,4,6},{8,1,3},{5,7,6}};
//     for(int i = 0; i<3; i++){
//         for(int j = 0; j<3; j++){
//             cout<<arr[j][i]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int arr[3][3] = {{2,4,6},{8,1,3},{5,7,6}};
//     for(int i = 0; i<3; i++){
//         for(int j = 0; j<3; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl; 
//     }
// }
int main(){
    int arr[4][3];
    int row = 4;
    int col = 3;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cin >> arr[i][j];
        }
    }
    cout<<"printing row wise:";
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
             cout << arr[i][j] << 1" ";
        }
    }
    cout<<endl; 
}