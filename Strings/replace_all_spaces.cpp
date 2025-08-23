#include<iostream>
using namespace std;
int getLength(char Sentence[]){
    int length = 0;
    int i = 0;
    while(Sentence[i] != '\0'){
        length++;
        i++;
    }
    return length;
}
void replaceAllSpaces(char Sentence[]){
    int i = 0;
    int n = getLength(Sentence);
    for(int i = 0; i<n; i++){
        if(Sentence[i] == ' '){
            Sentence[i] = '@';
        }
    }
}
int main(){
    char Sentence[100];
    cin >> Sentence;
    replaceAllSpaces(Sentence);
    cout<<"after replacing all the spaces with @ , the string is "<< Sentence<<endl;
    return 0;
}