class Solution {
public:
    int lengthOfLastWord(string s) {
        bool wordFound= false;
        int ct=0;
        for(int i=s.size() - 1; i>=0; i--){
            if(s[i] != ' '){
                wordFound = true;
                ct++;
            }
            else if(wordFound && s[i]==' '){
                break;
            }
        }
        
        return ct;
        
    }
};