class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mp1, mp2,mp;
        // map<int> mp2;
        for(auto i: nums1){
            mp1[i]++;
        }
        for(auto i: nums2){
            mp2[i]++;
        }
        
        for(auto i: mp1){
            if(mp2[i.first]){
                mp[i.first] = min(i.second, mp2[i.first]);
            }
        }
        vector<int> ans;
        
        for(auto i: mp){
            while(i.second --){
                ans.push_back(i.first);
            }
        }
        
        
             
        
        
        return ans;
    }
};