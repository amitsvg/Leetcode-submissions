class Solution {
public:
    
    
int f(int i, int j, string str, string sub, vector<vector<int>> &dp){
	if(j<0) return 1;
	if(i<0) return 0;
	if(dp[i][j] != -1) return dp[i][j];


	if(str[i] == sub[j]){
		return dp[i][j] = f(i-1, j-1, str, sub, dp) + f(i-1, j, str, sub, dp);
	}
	else{
		return dp[i][j] = f(i-1, j, str, sub, dp);
	}
}

// int distinctSubsequences(string &str, string &sub)
// {
// 	int n = str.size();
// 	int m = sub.size();
// 	vector<vector<int>> dp(n, vector<int> (m, -1));
	// return f(n-1, m-1, str, sub, dp);
// }

    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<vector<int>> dp(n, vector<int> (m, -1));
        return f(n-1, m-1, s, t, dp);
        
    }
};