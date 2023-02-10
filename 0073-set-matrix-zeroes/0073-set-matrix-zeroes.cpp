class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        set<int> r;
        set<int> c;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j] == 0){
                    r.insert(i);
                    c.insert(j);                    
                }
            }
        }
        for(auto i: r){
            for(int k=0;k<col;k++){
                matrix[i][k]=0;
            }
        }
        for(auto j: c){
            for(int k=0;k<row;k++){
                matrix[k][j]=0;
            }
        }
        
    }
};