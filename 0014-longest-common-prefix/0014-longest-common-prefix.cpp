class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        bool flag = true;
        
        int k=0;
        
        while(k < strs[0].size())    {    
            for(int i=0; i<strs.size(); i++){
                if(strs[i][k] != strs[0][k]){
                    flag = 0;
                    return ans;
                }

            }
            if(flag){
                ans.push_back(strs[0][k]);
            }
            k++;
        }
        
        return ans;
        
    }
};