class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int left=0;
        int right=0;
        long total = 0;
        int ans = 1;
        while(right < nums.size()){
            
            long target = nums[right];
            total += target;
            
            while((right-left+1)*target > total+k){
                total -=nums[left];
                left++;
            }            
            cout<<right-left+1<<endl;
            ans = max(ans, right-left+1);
            right++;
        }
        
        return ans;
    }
};