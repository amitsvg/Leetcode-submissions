class Solution {
public:
    int helper(vector<int> &cost,vector<int> &v,int n){
        if(n==cost.size()-1 || n==cost.size()-2){
            return cost[n];
        }
        if(v[n] != -1){
            return v[n];
        }
        return v[n] = cost[n] + min(helper(cost,v,n+1),helper(cost,v,n+2));
    }

    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> v(cost.size(),-1);
        return min(helper(cost,v,0),helper(cost,v,1));
    }
};