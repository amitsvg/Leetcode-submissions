class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        
        if(m*n != r*c){
            return mat;
        }
        
        vector<int> temp;
        for(auto i : mat){
            for(auto j : i){
                temp.push_back(j);
            }
        }
        for(auto i: temp)cout<<i<<" ";
        int k=0;
        vector<vector<int>> ans;
        for(int i=0; i<r; i++){
            vector<int> t;
            for(int j=0; j<c; j++){
                t.push_back(temp[k]);
                k++;
            }
            ans.push_back(t);
        }
        
        return ans;
    }
};