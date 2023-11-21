#define MOD 1000000007
class Solution {
    int rev(int num) {
        if (num < 10) {
            return num;
        }
        int digit, sum = 0;
        while (num != 0) {
            sum = (num % 10) + (sum * 10);
            num /= 10;
        }
        return sum;
    }
public:
    int countNicePairs(vector<int>& nums) {
        long count = 0;
        unordered_map<int, long> ref;
        for(int i = 0; i < nums.size(); i++) {
            ref[nums[i] - rev(nums[i])]++;
        }
        for (const auto &i : ref) {
            if (i.second > 1) {
                count += (i.second * (i.second - 1)) / 2;
            }
        }
        return count % MOD;
    }
};