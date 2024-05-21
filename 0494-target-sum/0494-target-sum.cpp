class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int sum = 0;
        for(auto ele: nums)sum+=ele;
        
        int s1 = sum - target;
        if(s1<0 || s1&1) return 0;
        s1/=2;
        int dp[n+1][s1+1];
        memset(dp, 0., sizeof dp);
        
        for(int i=0; i<n+1; i++){
            for(int j=0; j<s1+1; j++){
                if(i==0){
                    dp[i][j] = (j == 0) ? 1: 0;
                }
                else if(j < nums[i-1]){
                    dp[i][j] = dp[i-1][j];
                }
                else{
                    dp[i][j] = ( dp[i-1][j] + dp[i-1][j-nums[i-1]] );
                }
            }
        }
        
        return dp[n][s1];
        
        
    }
};