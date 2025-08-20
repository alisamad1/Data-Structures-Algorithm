int result = INT_MIN;
    int m;
    void solve(int idx,int count, int n, vector<int>& resultant,vector<vector<int>>& requests){
        if(idx>=m){
            bool allZero = true;
            for(int &x : resultant){
                if(x!=0){
                    allZero = false;
                    break;
                }
            }
            if(allZero == true){
                result = max(result, count);
            }
            return;
        }
        int from = requests[idx][0];
        int to = requests[idx][1];
        resultant[from]--;
        resultant[to]++;
        solve(idx+1, count+1, n, resultant, requests);
        resultant[from]++;
        resultant[to]--;
        solve(idx+1, count, n, resultant, requests);
    }
    int maximumRequests(int n, vector<vector<int>>& requests) {
        m = requests.size();
        vector<int> resultant(n,0);
        solve(0,0,n,resultant, requests);
        return result;
    }