class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ct = 0;
        map<int,int> mp;
        mp.insert({0,1});
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            if(mp[sum-k]){
                ct += mp[sum-k];
                // mp[sum]++;
            }
            mp[sum]++;
        }
        // cout<<ct;
        return ct;
        
    }
};