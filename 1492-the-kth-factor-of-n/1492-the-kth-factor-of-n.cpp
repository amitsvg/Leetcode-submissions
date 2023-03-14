class Solution {
public:
    int kthFactor(int n, int k) {
        int i=1;
        int ans = -1;
        while(i<=n){
            if(n%i == 0){
                k--;
                if(k==0){
                ans = i;
                break;
                }
            }
            i++;
        }
        return ans;
    }
};