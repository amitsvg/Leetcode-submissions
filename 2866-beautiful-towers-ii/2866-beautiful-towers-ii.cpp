class Solution {
public:
    long long maximumSumOfHeights(vector<int>& maxHeights) {
        int n = maxHeights.size();
        vector<int> v = maxHeights;
        vector<long long> prefix(n,-1);
        vector<long long> suffix(n,-1);
        
    stack<int> st;
    vector<int> ans(n, -1);
    int i=0;
    while(i<n){
        if(st.empty()) {
            ans[i] = -1;
            st.push(i);
            i++;
        }
        else if(v[st.top()] < v[i]){
            ans[i] = st.top();
            st.push(i);
            i++;
        }
        else{
            st.pop();
        }
    }
    stack<int> stt;
    vector<int> ans2(n,-1);
    int j=n-1;
    while(j>=0){
        if(stt.empty()){
            ans2[j] = -1;
            stt.push(j);
            j--;
        }
        else if(v[stt.top()] < v[j]){
            ans2[j] = stt.top();
            stt.push(j);
            j--;
        }
        else{
            stt.pop();
        }
    }
        
        
        
        
        prefix[0] = maxHeights[0];
        for(int i=1; i<n; i++){
            int low = ans[i];
            if(low==-1){
                prefix[i] = 1LL*(i+1)*maxHeights[i];
            }
            else{
                prefix[i] = prefix[low] + 1LL*maxHeights[i]*(i-low);
            }
        }
        
        suffix[n-1] = maxHeights[n-1];
        for(int i=n-2; i>=0; i--){
            int low = ans2[i];
            if(low== -1){
                suffix[i] = 1LL*(n-i)*maxHeights[i];
            }
            else{
                suffix[i] = suffix[low] + 1LL*maxHeights[i]*(low - i);
            }   
        }
        
        // for(auto i: prefix)cout<<i<<" ";
        // cout<<endl;
        // for(auto i: suffix)cout<<i<<" ";
        
        long long fans = 0;
        for(int i=0; i<n; i++){
            long long temp = prefix[i] + suffix[i] - maxHeights[i];
            fans = max(temp, fans);
        }
        
        
        return fans;
        
    }
};