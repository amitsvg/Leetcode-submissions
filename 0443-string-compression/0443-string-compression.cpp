class Solution {
public:
    int compress(vector<char>& chars) {
        
        
        
        string s;      
        int i = 1;
        char temp = chars[0];
        int ct = 1 ;
        while(i <= chars.size()){
            if(i == chars.size()){
                // cout<<"now is end end: "<<chars[i]<<endl;
                // ct++;
                s += chars[i-1];
                if(ct>1)
                s += to_string(ct);
                ct = 1;
                temp = chars[i];                
            }
            else if(chars[i] == chars[i-1]){
                ct++;
            }
            else{
                cout<<"now is: "<<chars[i]<<endl;
                // ct++;
                s += chars[i-1];
                if(ct > 1)
                s += to_string(ct);
                ct = 1;
                temp = chars[i];
            }
            
            i++;
        }
        
        cout<<"String is :: "<<s<<endl;
        
        chars.clear();
        for(auto i: s){
            chars.push_back(i);
        }
        
        return s.size();
        
    }
};