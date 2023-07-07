class Solution {
public:
    void dfs(map<int, vector<int> > &mp, set<int> &v, int a, vector<int> &ans){
        if(v.find(a) != v.end()) return;
        v.insert(a);
        ans.push_back(a);
        for(auto x: mp[a]) dfs(mp, v, x, ans);
        
        
    }
    vector<int> restoreArray(vector<vector<int>>& A) {
        map<int, vector<int> > mp;
        for(auto a: A){
            mp[a[0]].push_back(a[1]);
            mp[a[1]].push_back(a[0]);
        }
        int head = 0;
        for(auto m: mp){
            if(m.second.size() == 1) head = m.first;
        }
        set<int> v;
        vector<int> ans;
        dfs(mp, v, head, ans);
        return ans;
        
    }
};