class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        vector<int> ans;
        for(auto i: nums){
            if(find(ans.begin(), ans.end(), i) == ans.end()){
                ans.push_back(i);
            }
        }
        
        nums.clear();
        for(int i=0; i<ans.size(); i++){
            nums.push_back(ans[i]);
        }
        
        return nums.size();
        
    }
};