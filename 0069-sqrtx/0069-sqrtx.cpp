class Solution {
public:
    int mySqrt(int x) {
        long long int k =1;
        while(k*k < x){
            
            k++;
        }
        
        if(k*k == x){
            return k;
        }
        else{
            return k-1;
        }
        
    }
};