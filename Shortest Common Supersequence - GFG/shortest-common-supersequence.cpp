//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    int f(string s, string t){
        int n = s.size();
        int m = t.size();
        vector<vector<int>> dp(n+1, vector<int> (m+1, 0));
    
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(s[i-1] == t[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
    // 	string ans = "";
    // 	int i=n,j=m;
    // 	while(i>0 && j>0){
    // 		if(s[i-1] == t[j-1]){
    // 			ans = s[i-1] + ans;
    // 			i--,j--;
    // 		}
    // 		else if(dp[i-1][j] > dp[i][j-1]){
    // 			ans = s[i-1] + ans;
    // 			i--;
    // 		}
    // 		else{
    // 			ans = s[j-1] + ans;
    // 			j--;
    // 		}
    // 	}
    	return dp[n][m];
    }
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string a, string b, int kllkjkl, int asdf)
    {
        int n = a.size();
    	int m = b.size();
    	int lcsp = f(a,b);
    	
    	return n+m-lcsp;
    }
};

//{ Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}


// } Driver Code Ends