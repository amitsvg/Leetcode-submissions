class Solution {
public:
    bool check(string p, string t){
        int arr[26]={0};
        // memset(arr,0,sizeof(arr));
        for(auto i:p){
            arr[i-'a']++;
        }
        for(auto i: t){
            arr[i-'a']--;
        }
        for(int i=0; i<26; i++){
            if(arr[i]!=0)return false;
        }
        return true;
        
    }
    int minAnagramLength(string s) {
        int n=s.size();
        int ans=n;
        vector<int> div;
        for(int i=1;i*i<=n;i++){
            if(n%i==0)div.push_back(i),div.push_back(n/i);
        }
        for(auto k: div){
            string t=s.substr(0,k);
            bool found = false;
            for(int i=k; i<n; i+=k){
                string p = s.substr(i,k);
                if(check(p,t)){
                    found=true;
                }
                else{
                    found=false;
                    break;
                }
            }
            if(found){
                ans = min(ans, k);
            }
        }
        return ans;
        
    }
};