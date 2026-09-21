#include<iostream>
#include<vector>
#include<string>
using namespace std;                
class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        if (n == 0 || n > 3) return false;
        if (n > 1 && s[0] == '0') return false;
        int num = 0;
        for (char c : s) {
            if (!isdigit(c)) return false;
            num = num * 10 + (c - '0');
        }
        return num <= 255;
    }
    void backtrack(const string& s, int start, int segment, string currentIP, vector<string>& result) {
        if (segment == 4 && start == s.length()) {
            currentIP.pop_back(); // Remove the trailing dot
            result.push_back(currentIP);
            return;
        }
        if (segment >= 4) return;

        for (int len = 1; len <= 3; ++len) {
            if (start + len > s.length()) break;
            string part = s.substr(start, len);
            if (isValid(part)) {
                backtrack(s, start + len, segment + 1, currentIP + part + ".", result);
            }
        }
    }
    vector<string> restoreIpAddresses(string s) {
        vector<string> result;
        string currentIP;
        backtrack(s, 0, 0, currentIP, result);
        return result;
    }   