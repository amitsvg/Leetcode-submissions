class Solution {
public:
    string convertToTitle(int col) {
        string ans;
        while(col>0){
            char x = (col-1) % 26 + 'A';
            ans = x + ans;
            col=(col-1)/26;
        }
        
        return ans;        
    }
};