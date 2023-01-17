class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        int c = columnNumber;
        while(c > 0){
            int r = c % 26;
            if(r > 0){
            ans.push_back(r+ 64);
            }
            else{
                ans.push_back('Z');
            }
            c= c - 1;
            c= c/26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};