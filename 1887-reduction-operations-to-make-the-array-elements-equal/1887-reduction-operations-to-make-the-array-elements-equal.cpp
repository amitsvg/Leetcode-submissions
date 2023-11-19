class Solution {
public:
    int reductionOperations(vector<int>& a) {
     
        sort(a.begin(),a.end());
        int n  = a.size();
        int ans =0;
        for(int i=0; i<n-1; i++){
            if(a[i] == a[i+1])continue;
            
            ans += (n-1-i);
        }
        
        return ans;
    }
};