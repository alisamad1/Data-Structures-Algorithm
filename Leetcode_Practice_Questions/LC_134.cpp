int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int totalgas = 0;
    int totalcost = 0;
    int fuel = 0;
    int startIndex = 0;
    for(int i = 0; i<gas.size(); i++){
        totalgas += gas[i];
        totalcost +=  cost[i];
        fuel +=  gas[i] - cost[i];
        if (fuel < 0){
            startIndex = i + 1;
            fuel = 0;
        }
    }
    return(totalgas >= totalcost) ? startIndex : -1;
}