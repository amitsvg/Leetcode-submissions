class Solution {
public:
    bool isPowerOfFour(int n) {
        while(n){
            if(n==1) return 1;
            if(n%4 != 0){
                return false;
            }
            n = n/4;
        }
        return false;        
    }
};