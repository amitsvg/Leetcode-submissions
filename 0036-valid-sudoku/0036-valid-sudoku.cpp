class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<string,int> st;
        int j = 5, x = 6;
        // cout<<"good"+to_string(j)+to_string(x);
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] != '.'){
                    // st.insert("row"+i+board[i][j]);
                    // st.insert("col"+j+board[i][j]);
                    // st.insert("box"+( (i/3)*3 + j/3 )+board[i][j]);
                    st["row"+ to_string(i)+ to_string(board[i][j])]++;
                    st["col"+ to_string(j) + to_string(board[i][j])]++;
                    st["box"+to_string( (i/3)*3 + j/3 )+to_string(board[i][j])]++;
                }
            }
        }
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] != '.'){
                    if(st["row"+to_string(i)+ to_string(board[i][j])] > 1 ){
                        return false;
                    }
                    if(st["col"+ to_string(j) + to_string(board[i][j])] > 1 ){
                        return false;
                    }
                    if(st["box"+to_string( (i/3)*3 + j/3 )+to_string(board[i][j])] > 1 ){
                        return false;
                    }
                }
            }
        }
        return true;
        
        
    }
};