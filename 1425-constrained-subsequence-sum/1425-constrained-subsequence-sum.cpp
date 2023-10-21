class Solution {
public:
    int constrainedSubsetSum(vector<int>& v, int k) {
        int n=v.size();
        vector<int>dp(n,0);
        multiset<int>s;
        s.insert(0);
        for(int i=0;i<n;i++){
            if(i-k-1>=0){
                auto it=s.find(dp[i-k-1]);
                s.erase(it);
            }
            dp[i]=v[i]+*s.rbegin();
            s.insert(dp[i]);
        }
        return *max_element(dp.begin(),dp.end());
    }
};