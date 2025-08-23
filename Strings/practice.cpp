#include<iostream>
using namespace std;
/*int getLength(char name[]){
    int length = 0;
    int i = 0;
    while(name[i] != '\0'){
        length++;
        i++;
    }
    return length;
}
bool ischeckPalindrome(char name[]){
    int i = 0;
    int n = getLength(name);
    int j = n - 1;
    while(i<=j){
        if(name[i] != name[j]){
            return false;
        }
        else{
            i++;
            j++;
        }
    } 
    return true;
}
int main(){
    char name[100] = "RACECAR";
    ischeckPalindrome(name);
    return 0;
}
*/
// Program for Simple Solid Square
int main(){
    int rows;
    int cols;
    int m;
    int n;
    cout<<"enter the value of m: "<<endl;
    cin >> m;
    cout<<"enter the value of n: "<<endl;
    cin>>n;
    for(int row = 0; row<m; row++){
        for(int cols = 0; cols<n; cols++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}