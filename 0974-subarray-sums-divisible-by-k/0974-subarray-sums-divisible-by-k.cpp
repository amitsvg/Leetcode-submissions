class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans = 0;
        map<int, int> mp;
        int sum = 0;
        int rem = 0;
        mp[0] = 1;
        for(auto i : nums){
            sum += i;
            rem = sum % k;
            if(rem <0){
                rem = rem + k;
            }
            if(mp[rem]){
                ans += mp[rem];
                mp[rem]++;
            }
            else{
                mp[rem] = 1;
            }
        }
        
        return ans;
    }
};