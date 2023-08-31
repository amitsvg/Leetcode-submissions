class Solution {
public:
  
    int minTaps(int n, vector<int>& ranges) {
        vector<vector<int>>grid;
        for(int i=0;i<(n+1);i++)
        {
        grid.push_back({i-ranges[i],i+ranges[i]});
        }
        sort(grid.begin(),grid.end());
        int ans=0,bace=0,upper=0;
        for(int i=0;i<(n+1);i++)
        {
            if(upper>=n)
            return(ans);
            int y=i;
            while(i<(n+1)&&grid[i][0]<=bace)
            {
                upper=max(upper,grid[i][1]);
                i++;
            }
            if(y!=i)
           {  i--;
               ans++;
                bace=upper;
           }
            if(upper>=n)
            return(ans);
        }
   return(-1);
    }
};