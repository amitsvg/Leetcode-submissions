class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int> > ans(n-2, vector<int>(n-2));
        for(int x=1; x<=n-2; x++){
            for(int y=1; y<=n-2; y++){
                int temp = grid[x][y];
                for(int i=x-1; i<=x+1; i++){
                    for(int j=y-1; j<=y+1; j++){
                        temp = max(temp, grid[i][j]);
                    }
                }
                ans[x-1][y-1] = temp;
            }
        }
        return ans;
        
    }
};