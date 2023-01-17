class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i=0; i<s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                str.push_back(tolower(s[i]));
            }
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >='0' && s[i]<='9'){
                // if(s[i] >= 'A' && s[i] <= 'Z'){
                //     str.push_back(tolower(str[i]));
                // }
                str.push_back(s[i]);
            }
            
            
            else{
                continue;
            }
        }
        
        for(int i=0; i<str.size(); i++){
            cout<<str[i]<<endl;
        }
        cout<<endl;
        int i=0; 
        if(str.size() == 0) return true;
        // int j=str.size() - 1;
        while(i<=str.size()/2){
            if(str[i] != str[str.size() - 1 - i]){
                return false;                
            }
            
            i++;
            // j--;
        }
        
        
        return true;
    }
};