class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans = -1;
        int i = 0, j=0;
        while(i<haystack.size()){
            if(haystack[i] == needle[0]){
                string str = haystack.substr(i, needle.size());
                cout<<i<<"  "<<str<<endl;
                if(str == needle){
                    ans = i;
                    break;
                }
            }
            
            
            i++;            
        }
        
        return ans;        
    }
};