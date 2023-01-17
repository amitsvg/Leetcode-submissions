class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i=0; i<s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                str.push_back(tolower(s[i]));
            }
            else if(s[i] >= 'a' && s[i] <= 'z' || s[i] >='0' && s[i]<='9'){
                str.push_back(s[i]);
            }
            else{
                continue;
            }
        }
        
        int i=0; 
        if(str.size() == 0) return true;
        while(i<=str.size()/2){
            if(str[i] != str[str.size() - 1 - i]){
                return false;                
            }
            i++;
        }
        
        return true;
    }
};