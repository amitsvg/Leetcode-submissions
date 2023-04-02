class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> pairs;
        sort(potions.begin(), potions.end());
        for(auto i: spells){
            long long x = ceil(1.00*success/i);
            vector<int>::iterator lower;
            lower = lower_bound(potions.begin(), potions.end(), x);
            pairs.push_back(potions.end() - lower);
        }
        
        return pairs;
    }
};