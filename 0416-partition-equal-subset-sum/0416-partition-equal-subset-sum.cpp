class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0,n=nums.size();
        for(auto ele: nums)sum+=ele;
        if(sum&1)return false;
        sum/=2;
        bool dp[n+1][sum+1];
        for(int x=0; x<sum+1; x++) dp[0][x]=false;
        for(int x=0; x<n+1; x++) dp[x][0]=true;
        
        for(int i=1; i<n+1; i++){
            for(int j=1; j<sum+1; j++){
                if(nums[i-1] <= j){
                    dp[i][j] = dp[i-1][j-nums[i-1]] || dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
        
    }
};