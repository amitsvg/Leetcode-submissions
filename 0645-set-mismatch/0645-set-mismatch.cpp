class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int rep=-1,lost=-1;
        int mx = *max_element(nums.begin(), nums.end());
        int a[mx+1];
        memset(a,0,sizeof(a));
        for(auto i: nums){
            a[i]++;
        }
        for(int i=1; i<=mx; i++){
            if(a[i] == 2){
                rep = i;
            }
            if(a[i] == 0){
                lost = i;
            }
        }
        vector<int> ans;
        if(lost == -1) lost = mx+1;
        ans.push_back(rep);
        ans.push_back(lost);
        return ans;
    }
};