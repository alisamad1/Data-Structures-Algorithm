string removeKdigits(string num, int k) {
    if(k == num.length()){
        return "0";
    }
    int i = 0;
    while(k>0){
        i = (i>0) ? (i-1) : 0;
        while(i<num.length()-1 && num[i] <= num[i+1]){
            i++;
        }
        num.erase(num.begin() + i);
        k--;
    }
    auto non_zero = num.find_first_not_of("0");
    num.erase(0,non_zero);
    if(num.length() == 0){
        return  "0";
    }
    return num;
}