vector<string> simplifiedFractions(int n) {
    vector<string> result;
    unordered_set<float> set;
    for(int i = 1;i<n; i++){
        for(int j = i+1; j<=n; j++){
            float fraction = float(i)/j;
            if(set.find(fraction) == set.end()){
                result.push_back(to_string(i) + "/" + to_string(j));
                set.insert(fraction);
            }
        }
    }
    return result;
}