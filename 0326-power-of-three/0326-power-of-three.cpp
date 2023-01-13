class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0) return false;
        if(n%3==0){
            cout<<n/3<<endl;
            return isPowerOfThree(n/3);
        }
        
        return n==1;
    }
};