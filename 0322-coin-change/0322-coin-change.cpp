class Solution {
    int maxi = INT_MAX-1;
public:
    int coinChange(vector<int>& coins, int s) {
        int n = coins.size();
        // int dp[n+1][s+1];
        // for(int i=0; i<n+1; i++){
        //     for(int j=0; j<s+1; j++){
        //         if(j==0 && i==0) dp[i][j] = maxi-1;
        //         else if(j==0)dp[i][j]=0;
        //         else if(i==0) dp[i][j]=maxi-1;
        //         else if(i==1) {
        //             if(j%coins[0]==0)dp[i][j]=(j/coins[0]);
        //             else dp[i][j] = maxi-1;
        //         }
        //         else{
        //             if(coins[i-1]<=j){
        //                 dp[i][j] = min(1+dp[i][j-coins[i-1]], dp[i-1][j]);
        //             }
        //             else{
        //                 dp[i][j] = dp[i-1][j];
        //             }
        //         }
        //     }
        // }
        // if(dp[n][s]>=INT_MAX-2)return -1;
        // return dp[n][s];
        
        // int n = M, s=V;
	    // Your code goes here
	    int dp[n+1][s+1];
	    for(int x=0; x<s+1; x++)dp[0][x]  = INT_MAX - 1;
	    for(int x=1; x<n+1; x++)dp[x][0]  = 0;
	    for(int x=1; x<s+1; x++){
	        if(x%coins[0] == 0) dp[1][x] = (x/coins[0]);
	        else dp[1][x] = INT_MAX - 1;
	    }
	    
	    for(int i=2; i<n+1; i++){
	        for(int j=1; j<s+1; j++){
	            if(coins[i-1]<=j){
	                dp[i][j] = min(1+dp[i][j-coins[i-1]], dp[i-1][j]);
	            }
	            else{
	                dp[i][j] = dp[i-1][j];
	            }
	        }
	    }
	    if(dp[n][s]>=INT_MAX-1) return -1;
	    return dp[n][s];
        
        
    }
};