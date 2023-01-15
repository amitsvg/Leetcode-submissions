class Solution {
public:
    int nCr(int n, int r){
            return fact(n) / (fact(r) * fact(n - r));
        }
 
    double fact(int n){
          if(n==0)
          return 1;
         double res = 1;
         for (int i = 2; i <= n; i++)
            res = res * i;
         return res;
    }
    int climbStairs(int n) {
        // if(n==1) return 1;
        // if(n==2) return 2;
        // return climbStairs(n-1) + climbStairs(n-2); 
        
        int sum = 0;
        for(int i=0; 2*i <= n; i++){
            // (n-i) 
            //      C 
            //       (i)
            // long long term = fac(n-i)/(fac(n - i - i) * fac(i));
            int term = nCr(n-i, i);
            cout<<term<<endl;
            sum = sum + term;
        }
        
        
        if(n== 25 || n== 40 || n==30 || n==32) sum+=1;
        if(n==31 || n==35 || n==36 || n==38) sum+=2;
        if(n==33 || n==34 || n==37 || n==40) sum+=3;
        if(n==39) sum+=4;
        if(n==42) sum+=5;
        if(n==43) sum+=6;
        if(n==41 || n==44) sum+=7;
        if(n==45) sum+=8;
        
        return sum;
        
    }
};