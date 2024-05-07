class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string word, int k) {
        unordered_map<string,int> mp;
        int n=word.size();
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            string s;
            int j;
            for(j=i;j<i+k;j++)s+=word[j];
            mp[s]++;
            mx=max(mx,mp[s]);
            i=j-1;
        }
        
        int tot=n/k;
        
        return tot-mx;
    }
};