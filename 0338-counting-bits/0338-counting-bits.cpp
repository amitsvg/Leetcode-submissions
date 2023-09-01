class Solution {
public:
    int cb(int n){
        int ct=0;
        while(n>0){
            if(n & 1) ct++;
            n=n>>1;
        }
        return ct;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0; i<=n; i++){
            ans.push_back(cb(i));
        }
        
        return ans;
        
    }
};