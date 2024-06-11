class Solution {
public:
    int lcs(string x, string y){
        int m=x.size(), n=y.size();
        int t[m+1][n+1];
        for(int i=0; i<m+1; i++){
            for(int j=0; j<n+1; j++){
                if(i==0 || j==0) t[i][j]=0;
                else if(x[i-1] == y[j-1]){
                    t[i][j]= 1+t[i-1][j-1];
                }
                else{
                    t[i][j]=max(t[i-1][j], t[i][j-1]);
                }
            }
        }
        return t[m][n];
    }
    int longestPalindromeSubseq(string s) {
        string t=s;
        reverse(t.begin(), t.end());
        return lcs(s,t);
        
    }
};