class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        
//         int i = 0;
//         int j = n - 1;
        
//         while(i<m && j>=0){
//             if(matrix[i][j] == target){
//                 return true;
//             }
//             else if(matrix[i][j] > target){
//                 j--;
//             }
//             else{
//                 i++;
//             }
//         }
        
        int lo = 0;
        int hi = m*n - 1;
        while(lo <= hi){
            int mid = (lo+hi)/2;
            int midI = mid/n;
            int midJ = mid%n;
            if(matrix[midI][midJ] == target){
                return true;
            }
            else if(matrix[midI][midJ] < target){
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
            }
        }
        
        return false;
    }
    
};