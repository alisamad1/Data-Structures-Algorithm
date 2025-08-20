// we will be writing the code for Integer to Roman (Leetcode #12)
string intToRoman(int num) {
    const vector<int> val = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const vector<string> sym = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string result = "";
    for (size_t i = 0; i < val.size() && num > 0; ++i) {
        while (num >= val[i]) {  
            result += sym[i];
            num -= val[i];
        }
    }
    return result;
}
