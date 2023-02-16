class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int r1=0,r2=matrix.size() - 1;
        int c1=0, c2 = matrix[0].size() - 1;
        
        while(r1 <= r2 && c1 <= c2){
            
            //move left
            for(int i=c1; i<=c2; i++){
                ans.push_back(matrix[r1][i]);
            }
            //move down
            for(int i=r1+1; i<=r2; i++){
                ans.push_back(matrix[i][c2]);
            }
            
            if(r1<r2 && c1<c2){
                // moving left
                for(int i=c2-1; i>c1; i--){
                    ans.push_back(matrix[r2][i]);
                }
                //moving up
                for(int i = r2; i>r1; i--){
                    ans.push_back(matrix[i][c1]);                    
                }
            }
            r1++;
            r2--;
            c1++;
            c2--;
        }
        
        return ans;
    }
};