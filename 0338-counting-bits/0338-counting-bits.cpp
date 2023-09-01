class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0; i<=n; i++){
            bitset<32> b1(i);
            ans.push_back(b1.count());
        }
        
        return ans;
        
    }
};