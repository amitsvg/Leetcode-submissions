class Solution {
public:
    vector<vector<int>> generate(int n) {
        
        int v[n][n];
        // vector<vector<int>> v( n , vector<int> (n)); 
        v[0][0] = 1;
        // v[1] = {1, 1};
        for(int i=1; i<n; i++){
            v[i][0] = 1;
            v[i][i] =1;
            for(int j=1; j<i; j++){
                v[i][j] = v[i-1][j-1] + v[i-1][j];
            }
        }
        
        vector<vector<int>> ans;
        
        for(int i=0; i<n; i++){
            vector<int>x;
            for(int j=0; j<=i; j++){
                x.push_back(v[i][j]);
            }
                ans.push_back(x);
        }
        return ans;
    }
};