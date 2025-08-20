//Minimum Window Substring in C++
#include <iostream>
#include <unordered_map>
#include <climits> // For INT_MAX
using namespace std;
string minWindow(string s, string t) {
    int n = s.length();
    if (t.length() > n) {
        return "";
    }
    unordered_map<char, int> mp;
    for (char &ch : t) {
        mp[ch]++;
    }
    int required_count = t.length();
    int i = 0;
    int j = 0;
    int minStart = 0;
    int minWindow = INT_MAX;
    while (j < n) {
        char ch_j = s[j];
        if (mp[ch_j] > 0) {
            required_count--;
        }
        mp[ch_j]--;
        while (required_count == 0) {
            if (minWindow > j - i + 1) {
                minWindow = j - i + 1;
                minStart = i;
            }
            char ch_i = s[i];
            mp[ch_i]++;
            if (mp[ch_i] > 0) {
                required_count++;
            }
            i++;
        }
        j++;
    }
    return minWindow == INT_MAX ? "" : s.substr(minStart, minWindow);
}
int main() {
    string s = "ADOBECODEBANC";
    string t = "ABC";
    string result = minWindow(s, t);
    cout << "Minimum window substring: " << result << endl; // Output: "BANC"
    return 0;
}