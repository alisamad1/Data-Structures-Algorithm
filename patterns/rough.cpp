#include<iostream>
using namespace std;
/*int main(){
    //program for solid square
    int row;
    int col;
    int n;
    int m;
    cout<<"enter the value of N: "<<endl;
    cin>>n;
    cout<<"enter the value of M: "<<endl;
    cin>>m;
    for(int row = 0;row<n; row++){
        for(int col = 0; col<m; col++){
            cout<<"* "<<endl;
        }
        cout<<endl;
    }
    return 0;
}
//program for solid_half_diamond
int main(){
    int n;
    cout<<"enter the value of N: "<<endl;
    cin >> n;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j<=i ; j++){
            cout<<"*"<<endl;
        }
        cout<<endl;
    }
    for(int i = n-2 ; i>=0; i--){
        for(int j = 0; j<=i; j++){
            cout<<"*"<<endl;
        }
        cout<<endl;
    }
    return 0;
}
// program for pascal triangle
int main(){
    int n;
    cout<<"enter the value of N: "<<endl;
    cin>>n;
    for(int i = 0; i<n; i++){
        int count = 1;
        for(int j = 1; j<=i; j++){
            cout<<count<<" ";
            count = count * (i-j)/j;
        }
        cout<<endl;
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter the value of n: "<<endl;
    cin>>n;
    int c = 1;
    for(int i=0; i<n; i++){
        for(int j=1 ; j<=i; j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
    return 0;
}
//program to reverse string
int getlength(char name[]){
    int length = 0;
    int i = 0;
    while(name[i]!= 0){
        length++;
        i++;
    }
    return length;
}
void reverseString(char name[]){
    int i = 0;
    int n = getlength(name);
    int j = n-1;
    swap(name[i], name[j]);
    i++;
    j--;
}
int main(){
    char name[100];
    cin>> name;
    cout<<"The String before reversal: "<<name<<endl;
    reverseString(name);
    cout<<"the String after reversal: "<<name<<endl;
    return 0;
}
int getlength(char Sentence[]){
    int length = 0;
    int i = 0;
    while(Sentence[i]!= '/0'){
        length++
        i++;
    }
}
void ReplaceSpaces(char Sentence[]){
    int i = 0;
    int n = getlength(Sentence);
    for(int i = 0;i<n; i++){
        if(Sentence[i] == " "){
            Sentence[i] = "@";
        }
    }
}
int main(){
    char Sentence[100];
    cin >> Sentence;
    cout<<"Sentence Before Replacement: "<<Sentence<<endl;
    ReplaceSpaces(Sentence);
    cout<<"Sentence After Replacement: "<<Sentence<<endl;
    return 0;
}
*/
int getLength(char name[]){
    int length = 0;
    int i = 0;
    while(name[i] != '\0'){
        length++;
        i++;
    }
    return length;
}
void reverseArray(char name[]){
    int i = 0;
    int n = getLength(name);
    int j = n-1;
    swap(name[i], name[j]);
    i++;
    j--;
}
int main(){
    char name[100] = "Samad";
    reverseArray(name);;
    return 0; 
}
