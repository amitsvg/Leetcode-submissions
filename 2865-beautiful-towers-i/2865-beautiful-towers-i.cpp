#include<bits/stdc++.h>
class Solution {
public:
    long long fsum(int maxi, vector<int> ans){
        int n = ans.size();
        int i=0;
        if(maxi>=1) i = maxi;
    
        int ap = ans[i];
        i--;
        while(i>=0){
            if(ans[i] > ap){
                ans[i] = ap;
                i--;
            }
            else{
                ap=ans[i];
                i--;
            }
            
        }
    
        
        
        int j = maxi;
        int pp = ans[j];
        j++;
        
        while(j<n){
            if(ans[j] > pp){
                ans[j] = pp;
                j++;
            }
            else{
                pp = ans[j];
                j++;
            }
            
        }
        // for(auto i: ans)cout<<i<<" ";
        // cout<<endl;
        
        long long fans =0;
        for(auto i: ans)fans+=i;
        // cout<<"fff"<<fans<<endl;
        
        return fans;
    }
    long long maximumSumOfHeights(vector<int>& maxHeights) {
        
        vector<int> ans = maxHeights;
        int n = ans.size();
        int maxi = 0;
        
        long long fans = -1;
        for(int ind =0; ind<n; ind++){
            fans = max(fans, fsum(ind, ans));
        }
        
        
        return fans;
    }





};