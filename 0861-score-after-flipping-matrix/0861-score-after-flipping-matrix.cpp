class Solution {
public:
    void togglerow(int row, vector<vector<int>>& grid){
        int n = grid[0].size();
        for(int col=0; col<n; col++){
            if(grid[row][col] == 1){
                grid[row][col]=0;
            }
            else{
                grid[row][col]=1;
            }
        }
        return;
    }
    void togglecol(int col, vector<vector<int>>& grid){
        int m = grid.size();
        for(int row=0; row<m; row++){
            if(grid[row][col] == 1){
                grid[row][col] = 0;
            }
            else{
                grid[row][col] = 1;
            }
        }
        
    }
    int matrixScore(vector<vector<int>>& grid) {
        int ans=0;
        int m = grid.size();
        int n = grid[0].size();
        int col=0,row=0;
        for(row=0; row<m; row++){
            if(grid[row][col] == 0){
                togglerow(row, grid);
            }
        }
        
        for(col=1; col<n; col++){
            int ctone=0,ctzero=0;
            for(row=0; row<m; row++){
                if(grid[row][col] == 1)ctone++;
                else ctzero++;
            }
            if(ctzero>ctone) togglecol(col, grid);
        }
        
        for(int i=0; i<m; i++){
            int p2=1;
            int num=0;
            for(int j=n-1; j>=0; j--){
                num += p2*grid[i][j];
                p2 *= 2;
            }
            ans += num;
        }
        
        return ans;
    }
};