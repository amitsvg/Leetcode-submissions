class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = *max_element(candies.begin(), candies.end());
        cout<<"max is:"<<mx<<endl;
        vector<bool> result;
        int i=0;
        while(i<candies.size()){
            // if(candies[i] == mx){
            //     result[i] = true;
            //     i++;
            //     continue;
            // }
            if((candies[i] + extraCandies) >= mx){
                cout<<"added: "<<(candies[i] + extraCandies)<<"index:"<<i<<endl;
                // result[i] == true;
                result.push_back(true);
            }
            else{
                // result[i] = false;
                result.push_back(false);
            }
            i++;
        }
        
        return result;
        
    }
};