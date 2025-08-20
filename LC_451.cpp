string frequencySort(string s) {
    vector<pair<int,int>> a(256);
    int n = s.length();
    for(int i = 0; i<n; i++){
        a[s[i]].first++;
        a[s[i]].second = s[i];
    }
    sort(a.begin(),a.end());
    reverse(a.begin(), a.end());
    string ans = "";
    for(int i = 0 ; i<256; i++){
        if(a[i].first > 0){
            for(int j = 0; j<a[i].first; j++){
                ans+=(a[i].second);
            }
        }
    }
    return ans;
}