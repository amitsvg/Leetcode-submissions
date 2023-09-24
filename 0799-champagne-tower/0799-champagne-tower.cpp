class Solution {
public:
double dp[101][101];

    double solve(int poured , int row , int glass){
        
                if(row < 0 || glass < 0){
            return 0;
        }
        if(row == 0 and glass == 0){
            return poured;
        }
        if(dp[row][glass] != -1){
            return dp[row][glass];
       }

        double left = solve(poured,row-1,glass-1)-1; 
        if(left < 0) left = 0;
        double right = solve(poured,row-1,glass)-1;
        if(right < 0) right = 0;
        return dp[row][glass] = (left+right)/2;
        //return (left+right)/2;


    }
    double champagneTower(int poured, int query_row, int query_glass) {
       //memset(dp , -1.0 , sizeof(dp));
       for(int i = 0 ; i < 101 ; i++){
           for(int j = 0 ; j < 101 ; j++){
               dp[i][j] =-1;

           }
       }

       return min(1.00,solve(poured,query_row,query_glass));
    }
};