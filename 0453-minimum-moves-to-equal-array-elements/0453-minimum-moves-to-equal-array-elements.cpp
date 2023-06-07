class Solution {
public:
    int minMoves(vector<int>& nums) {
        int small = *min_element(nums.begin(), nums.end());
        long long sum = 0;
        sum = accumulate(nums.begin(), nums.end(), 0);
        return (sum - small*nums.size());
        
        
    }
};