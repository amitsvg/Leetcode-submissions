class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0,minSoFar=INT_MAX;
        vector<int> aux;
        for(auto i: prices){
            minSoFar = min(minSoFar, i);
            cout<<minSoFar<<" ";
            ans = max(ans, i - minSoFar);
        }

        
        
        return ans;        
    }
};