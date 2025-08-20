vector<int> plusOne(vector<int>& digits) {
    int carry = 1;
    int n = digits.size() - 1;
    vector<int> x;
    while(carry == 1 && n >= 0){
     x.insert(x.begin(),(carry+digits[n])% 10);
     carry = (carry + digits[n]) / 10;
     n--;
    } 
    if(carry == 1){
     x.insert(x.begin(),carry);
    }
    while(n>=0){
     x.insert(x.begin(),digits[n]);
     n--;
    }
    return x;
 }