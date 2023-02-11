class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0,sofar=0;
        vector<int> aux;
        for(int i=prices.size()-1; i>=0;  i--){
            sofar = max(sofar, prices[i]);
            aux.push_back(sofar);
        }
        reverse(aux.begin(), aux.end());
        for(auto i: aux){
            cout<<i<<" ";
        }
        
        for(int i=0; i<aux.size(); i++){
            ans = max(ans, aux[i] - prices[i]);
        }
        

        
        
        return ans;        
    }
};