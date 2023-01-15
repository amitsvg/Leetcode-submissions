class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans=-1,i;
        if(target < nums[0]){
            return 0;
        }
        if(find(nums.begin(), nums.end(), target) != nums.end()){
            auto it = find(nums.begin(), nums.end(), target);
            ans = it - nums.begin();
        }
        else{
            for( i=0; i<nums.size()-1; i++){
                if(nums[i] < target && nums[i+1] > target){
                    ans =  i+1;
                    break;
                }
            }
            cout<<i<<endl;
            if(nums[i] < target){
                ans = i+1;
            }
            else{
                ans = i;
            }
            
        }
        
        return ans;        
        
    }
};