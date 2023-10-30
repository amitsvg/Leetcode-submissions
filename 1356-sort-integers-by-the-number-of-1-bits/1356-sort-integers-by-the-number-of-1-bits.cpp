class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int>res ;
        vector<pair<int,int>>v ;
        for(auto val: arr){
            int temp = val;
            int cnt = 0 ;
            while(temp){
                cnt += temp&1;
                temp = temp>>1;
            }
            v.push_back({cnt,val});
        }
        sort(v.begin(),v.end());
        for(auto val:v)
        {
            res.push_back(val.second);
        }
        return res;
    }
};
