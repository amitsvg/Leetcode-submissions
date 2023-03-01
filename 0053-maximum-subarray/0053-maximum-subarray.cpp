class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int cur_sum = 0;
        for(int i=0; i<nums.size(); i++){
            cur_sum += nums[i];
            if(cur_sum > maxSum){
                maxSum = cur_sum;
            }
            
            if(cur_sum < 0){
                cur_sum = 0;
            }
        }
        
        return maxSum;
        
    }
};