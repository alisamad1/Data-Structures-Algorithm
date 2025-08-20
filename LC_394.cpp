#include<iostream>
#include<string>
using namespace std;
string decodeStrings(string &s, int& i){
    string result;
    while(i < s.length() && s[i] != ']'){
        if(isdigit(s[i])){
            int k = 0;
            while(i < s.length() && isdigit(s[i])){
                k = k * 10 + s[i++] - '0';
            }
            i++;
            string r = decodeStrings(s,i);
            while(k-- > 0){
                result += r;
            }
            i++;    
        }
        else{
            result += s[i++];
        }
    }
    return result;
}
string decodeString(string s) {
    int i = 0;
    return decodeStrings(s, i);
}
int main() {
    string s = "3[a2[c]]";
    cout << "The Decoded string of the coded string " << s << " is " << decodeString(s) << endl;
    return 0;
}

