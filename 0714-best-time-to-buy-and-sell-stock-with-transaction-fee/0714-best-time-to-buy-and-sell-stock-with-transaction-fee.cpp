class Solution {
public:
    
    int maxProfit(vector<int> &prices,  int fee)
    {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int> (2, -1));

            function<int(int, int)> sf= [&] (int ind, int buy){
                if(ind==n)return 0;

                if(dp[ind][buy]!=-1)return dp[ind][buy];

                if(buy){
                    return dp[ind][buy] = max( -prices[ind]+ sf(ind+1, 0) , sf(ind+1, 1) );
                }            
                    return dp[ind][buy] = max(prices[ind]-fee+sf(ind+1, 1), sf(ind+1, 0));

        };

	    return sf(0, 1);
	    // return f(0, 1, prices,n,fee);
    }
};