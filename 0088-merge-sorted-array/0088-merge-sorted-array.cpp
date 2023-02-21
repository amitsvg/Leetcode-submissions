class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0;
        auto jt = nums2.begin();
        auto iit = nums1.end() - 1;
        cout<<*iit<<" .... "<<endl;
        for(int i=n; i>=1; i--){
            nums1.erase(nums1.end() - 1);
        }
        
        for(auto it=nums1.begin(); it != nums1.end(); it++){
            if(jt == nums2.end()){
                break;
            }
            else{
                if(*it > *jt){
                    nums1.insert(it, *jt);
                    // jt++;                 
                    reverse(nums2.begin(), nums2.end());
                    nums2.pop_back();
                    reverse(nums2.begin(), nums2.end());
                    jt = nums2.begin();                   
                    
                }
            }
            
        }
        for(auto j : nums2){
            nums1.push_back(j);
        }
        for(auto i: nums1) cout<<i<<" ";
        
        // return nums1;
        
    }
};