class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ct=0;
       auto it = nums.begin();
        while(it != nums.end()){
            if(*it == 0){
                ct++;
                nums.erase(it);
                continue;
            }
                it++;
        }
        while(ct--){
            nums.push_back(0);
        }
        
    }
};