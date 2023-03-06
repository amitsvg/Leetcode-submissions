class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int ans = -1;
        int a[10005];
        memset(a, 0, sizeof(a));
        int ct=0;
        
        for(auto i: arr) a[i]++;
        for(int i=1; i<10005; i++){
            cout<<a[i]<<" , ";
            if(a[i] == 0){
                ct++;
                if(k==ct) return i;
            }
        }
        
        
        return ans;        
    }
};