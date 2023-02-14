class Solution {
public:
    int maxArea(vector<int>& h) {
        int ans = -1;
        int left = 0;
        int right = h.size() - 1;
        while(left < right){
            ans = max(ans, min(h[left], h[right])*(right - left) );
            if(h[right] > h[left]){
                left++;
            }
            else if( h[left] > h[right]){
                right--;
            }
            else{
                left++;
                right--;
            }
        }
        
        return ans;
    }
};