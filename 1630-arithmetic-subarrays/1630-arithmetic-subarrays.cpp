class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int m = l.size();
        vector<bool> ans(m, 1);
        for(int i=0; i<m; i++){
            int left = l[i];
            int right = r[i];
            vector<int> temp = nums;
            sort(temp.begin()+left, temp.begin()+right+1);
            for(int j=left+1; j<=right; j++){
                if(temp[j] - temp[j-1] != temp[left+1] - temp[left]){
                    ans[i] = false;
                    break;
                }
            }
        }
        return ans;
        
    }
};