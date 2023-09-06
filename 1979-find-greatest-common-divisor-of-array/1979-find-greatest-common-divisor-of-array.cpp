class Solution {
public:
     int findGCD(vector<int>& nums) {
        // find the maximum element
      int a=*max_element(nums.begin(),nums.end());
      // find the minimum element
      int b=*min_element(nums.begin(),nums.end());
      // return the greatest common divisor of max element amd min element
      return gcd(a,b);

    }
};