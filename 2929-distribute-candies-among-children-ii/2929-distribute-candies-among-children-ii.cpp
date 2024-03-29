class Solution {
public:
    
    long long distributeCandies(int n, int limit) {
        
        long long ans=0;
        for(int i=0; i<=min(n, limit); i++){
            if(n-i <= 2*limit){
                int upper = min(n-i, limit);
                int lower = n-i-upper;
                ans+=upper-lower+1;
            }
        }
            return ans;
    }
};