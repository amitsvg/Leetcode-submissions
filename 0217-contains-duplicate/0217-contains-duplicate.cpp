class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> m;
        for(auto val :nums){
            m[val]++;
        }
        
        for(auto val : m){
            if(val.second > 1){
                return true;
            }
        }

        return false;
        
    }
};