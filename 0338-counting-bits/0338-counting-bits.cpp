
class Solution {
public:
    int cb(int n){
        if(n==0) return 0;
        if(n==1) return 1;
        
        if(n%2==0) {
            return cb(n/2);
        }
        else {
            return 1 + cb(n/2);
        }
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0; i<=n; i++){
            // ans[i] = cb(i,ans);
            ans.push_back(cb(i));
        }
        
        return ans;
        
    }
};