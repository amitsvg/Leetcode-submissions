class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int,vector<int>> mp;
        int n = groupSizes.size();
        for(int i = 0;i < n;i++)
            mp[groupSizes[i]].push_back(i);
        vector<vector<int>> ans;
        vector<int> temp;
        for(auto a : mp){
            for(int i = 1;i <= a.second.size();i++){
                temp.push_back(a.second[i-1]);
                if(i % a.first == 0){
                    ans.push_back(temp);
                    temp.clear();
                }
            }
        } 
        return ans;   
    }
};