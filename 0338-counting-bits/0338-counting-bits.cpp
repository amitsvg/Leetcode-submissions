
class Solution {
public:
    int cb(int n, vector<int> &dp){
        if(n==0) return 0;
        if(n==1) return 1;
        if(dp[n] != 0) return dp[n];
        
        if(n%2==0) {
            return dp[n] = cb(n/2, dp);
            // return cb(n/2,dp);
        }
        else {
            return dp[n] = 1+ cb(n/2,dp);
            // return 1 + cb(n/2,dp);
        }
    }
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        for(int i=0; i<=n; i++){
            ans[i] = cb(i,ans);
        }
        
        return ans;
        
    }
};