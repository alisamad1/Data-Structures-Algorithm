#include<iostream>
using namespace std;
int max69number(int num){
    string s = to_string(num);
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '6'){
            s[i] = '9';
            break;
        }
    }
    return stoi(s);
}
int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int result = max69number(num);
    cout << "The maximum number after changing one 6 to 9 is: " << result << endl;
    return 0;
}