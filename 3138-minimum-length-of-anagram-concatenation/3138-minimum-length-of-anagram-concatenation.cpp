class Solution {
public:
//     bool check(string p, string t){
//         int arr[26]={0};
//         // memset(arr,0,sizeof(arr));
//         for(auto i:p){
//             arr[i-'a']++;
//         }
//         for(auto i: t){
//             arr[i-'a']--;
//         }
//         for(int i=0; i<26; i++){
//             if(arr[i]!=0)return false;
//         }
//         return true;
        
//     }
    bool ff(string s, int k){
        int n =s.size();
        unordered_map<int,int> mp1,mp2;
        int i=0;
        while(i<k){
            mp1[s[i]]++;
            i++;
        }
        for(;i<n;i+=k){
            for(int j=i; j<i+k; j++){
                mp2[s[j]]++;
            }
            for(char ch='a'; ch<='z'; ch++){
                if(mp1[ch] != mp2[ch]){
                    return false;
                }
            }
            mp2.clear();
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
        sort(begin(div),end(div));
        for(auto k: div){
            bool a = ff(s,k);
            if(a) return k;
        }
        return ans;
        
    }
};