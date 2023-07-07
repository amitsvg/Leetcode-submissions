class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int index = 0, fuel = 0;
        vector<int> nextrem(n);
        for(int i=0; i<n; i++){
            nextrem[i] = gas[i] - cost[i];
        }
        if(accumulate(nextrem.begin(), nextrem.end(), 0) >=0 ){
            for(int i=0; i<n; i++){
                fuel += nextrem[i];
                if(fuel < 0){
                    index = i+1;
                    fuel = 0;
                }
            }
            return index;
        }
        return -1;
        
    }
};