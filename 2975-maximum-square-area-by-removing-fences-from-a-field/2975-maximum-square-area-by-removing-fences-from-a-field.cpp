class Solution {
public:
    int maximizeSquareArea(int m, int n, vector<int>& h, vector<int>& v) {
        h.push_back(1);
        h.push_back(m);
        sort(h.begin(), h.end());
        
        v.push_back(1);
        v.push_back(n);
        sort(v.begin(), v.end());
        
        set<int> st;
        for(int i=0; i<h.size(); i++){
            for(int j=i+1; j<h.size(); j++){
                int diff = h[j] - h[i];
                if(diff==0)continue;
                
                st.insert(diff);
            }
        }
        long long ans=-1;
        long long mod = 1e9+7;
        for(int i=0; i<v.size(); i++){
            for(int j=i+1; j<v.size(); j++){
                long long diff = v[j] - v[i];
                if(diff==0)continue;
                
                if(st.count(diff)){
                    long long area = diff*diff;
                    // cout<<area<<endl;
                    ans = max(ans, area);
                }
            }
        }
        
        if(ans == -1)return -1;
        
        return ans%mod;
    }
};