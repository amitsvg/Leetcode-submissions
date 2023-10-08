class Solution {
    vector<vector<int>> dp;
    int n;
public:
    int f(int ind, int left, set<int> &incorrect, string &s1, string &s2, int &x){
        if(ind == s1.size()) return 0;
        
        if(dp[ind][left]!=-1)return dp[ind][left];
        
        if(s1[ind] == s2[ind]) return dp[ind][left]= f(ind+1, left, incorrect, s1, s2, x);
        else{
            if(left == n+1){
                return dp[ind][left]=f(ind+1, ind, incorrect, s1, s2, x);
            }
            else{
            // cout<<ind<<" "<<left<<endl;
                int solveleft = f(ind+1, n+1, incorrect, s1, s2, x) + ( (ind-left >= x ) ? x : ind-left);
                
                set<int>::iterator nxt = incorrect.upper_bound(ind);
                if(nxt == incorrect.end()) return dp[ind][left]= solveleft;
                int solveright = f(*nxt+1, left, incorrect, s1, s2, x) + ( (*nxt-ind >= x ) ? x : *nxt-ind );
                return dp[ind][left]=min(solveleft, solveright);
            }
        }
        
        
    }
    int minOperations(string s1, string s2, int x) {
        n = s1.size();
        set<int> incorrect;
        for(int i=0; i<n; i++){
            if(s1[i] != s2[i]){
                incorrect.insert(i);
            }
        }
        dp.assign(n, vector<int> (n+2,-1));
        if(incorrect.size() % 2 ==1)return -1;
        
        return f(0, n+1, incorrect, s1, s2, x);
        
        
    }
};