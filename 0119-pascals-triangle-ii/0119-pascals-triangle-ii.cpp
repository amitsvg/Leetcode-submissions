class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // vector<vector<int> > v(rowIndex, vector<int>(rowIndex,0));
        int v[rowIndex+1][rowIndex+1];
        v[0][0]=1;
        
        for(int i=1; i<=rowIndex; i++){
            v[i][0] = 1;
            v[i][i] = 1;
            for(int j=1; j<i; j++){
                v[i][j] = v[i-1][j-1] + v[i-1][j];
            }
            
        }
        for(int i=0; i<=rowIndex; i++){
            for(int j=0; j<=i;j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
        
        vector<int> ans;
        for(int i=0; i<=rowIndex; i++){
            ans.push_back(v[rowIndex][i]);
        }
        
        return ans;
        
    }
};