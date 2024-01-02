class Solution {
public:
    int maximumLength(string s) {
        int n=s.size();
        map<string, int> mp;
        for(int i=0; i<n;){
            string x="";
            int j=i;
            while(s[j] == s[i]){
                x += s[j];
                j++;
            }
            mp[x]++;
            // cout<<x<<endl;
            i=j;
            
        }
        int ans = -1;
        for(auto [aa,bb] : mp){
            string a = aa;
                int b=bb;
            int len = a.size();
            if(len==1 and b>=3) ans = max(ans,1);
            else if(len>=2){
                a.pop_back();
                // cout<<a<<" "<<b<<mp[a]<<endl;
                if(b>=3) ans = max(ans, len);
                else if(b==2) ans = max(ans, len-1);
                else if(b==1 && mp[a]) ans = max(ans, len-1);
                else if(len>=3) ans = max(ans, len-2);
            }
        }
     return ans;   
    }
};