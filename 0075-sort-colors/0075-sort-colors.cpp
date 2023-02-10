class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>ans;
        for(auto i: nums){
            if(i == 0){
                ans.push_back(i);
            }
        }
        for(auto i: nums){
            if(i == 1){
                ans.push_back(i);
            }
        }
        for(auto i: nums){
            if(i == 2){
                ans.push_back(i);
            }
        }
        for(int i=0;i<nums.size(); i++){
            nums[i] = ans[i];
        }
        
    }
};