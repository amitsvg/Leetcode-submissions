class Solution {
public:
    int candy(vector<int>& r) {
        // int n=r.size();
        // sort(r.begin(), r.end());
        // int sum=1;
        // for(int i=1;i<n;i++){
        //     if(r[i] > r[i-1]) sum+=2;
        //     else sum+=1;
        // }
        // return sum;

        int n = r.size();
        vector<int> v(n, 1); 
        // right neighbors get more v for higher r
        for(int i = 1; i < n; i++){
            if(r[i] > r[i - 1]){
                v[i] = v[i - 1] + 1;
            }
        }
        // left neighbors get more v for higher r
        for (int i = n - 2; i >= 0; i--){
            if (r[i] > r[i + 1]) {
                v[i] = max(v[i], v[i + 1] + 1);
            }
        }
        int sum=accumulate(v.begin(), v.end(), 0);
        return sum;
    }
};