class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto i: s){
            if(i == '(' || i == '{' || i == '['){
                st.push(i);
                cout<<i<<endl;
            }
            else{
                if(st.empty()) return false;
                else if( i == ')' && st.top() == '(' ){
                    cout<<i<<endl;                               
                    st.pop();
                }
                else if( i == '}' && st.top() == '{' ){
                    cout<<i<<endl;
                    st.pop();
                }
                else if(i == ']' && st.top() == '['){
                    cout<<i<<endl;
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
        
    }
};