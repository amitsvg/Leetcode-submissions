class Solution {
public:
    int count(vector<vector<int>> &board, int i, int j){
        int sum=0;
        int x = board.size();
        int y = board[0].size();
            
                if(i>0 && board[i-1][j]==1)sum++;
                if(j>0 && board[i][j-1]==1)sum++;
                if(i>0 && j>0 && board[i-1][j-1]==1)sum++;
                if(i>0 && j<y-1 && board[i-1][j+1]==1)sum++;

                if(i<x-1 && board[i+1][j]==1)sum++;
                if(j<y-1 && board[i][j+1]==1)sum++;
                if(i<x-1 && j<y-1 && board[i+1][j+1]==1)sum++;
                if(i<x-1 && j>0 && board[i+1][j-1]==1)sum++;
        
    return sum;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int row = board.size();
        int col = board[0].size();
        vector<pair<int,int> > change;
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                int countlive = count(board, i, j);
                if(board[i][j] == 1 &&  (countlive<2 || countlive>3)){
                    change.push_back({i,j});                    
                }
                else if(board[i][j] == 0 && countlive == 3){
                    change.push_back({i,j});                    
                }
            }
        }
        
        for(auto i: change){
            board[i.first][i.second] = ((board[i.first][i.second] == 1) ? 0 : 1);
        }
        
    }
};