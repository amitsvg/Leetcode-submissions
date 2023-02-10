class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());
        int arr[mx+1];
        for(int i=0;i<=mx;i++)arr[i]=0;
        for(auto i: nums){
            arr[i]++;
        }
        
        int ans = -1;
        for(int i=0; i<=mx; i++){
            if(arr[i] == 0){
                ans = i;
            }
        }
        
        return ((ans==-1) ? mx+1 : ans);
        
    }
};