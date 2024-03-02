class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        map<int,int>mp;
        for(auto i: nums){
            mp[i*i]++;
        }
        nums.clear();
        
        for(auto [k,v]: mp){
            while(v--){
                nums.push_back(k);
            }
        }
        return nums;
    }
};