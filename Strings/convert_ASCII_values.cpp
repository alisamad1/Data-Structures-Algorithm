#include<iostream>
using namespace std;
int getLength(char arr[]){
    int length = 0;
    int i = 0;
    while(arr[i] != '\0'){
        length++;
        i++;
    }
    return length;
}
void convertIntoUpperCase(char arr[]){
    int n = getLength(arr);
    for(int i = 0; i<n; i++){
        arr[i] = arr[i] - 'a' + 'A';
    }
}
void convertIntoLowerCase(char arr[]){
    int n = getLength(arr);
    for(int i = 0; i<n; i++){
        arr[i] = arr[i] -'A'+'a';
    }
}
int main(){
    char arr[100] = "babbbar";
    convertIntoUpperCase(arr);
    cout<<arr<<endl;
    return 0;
}