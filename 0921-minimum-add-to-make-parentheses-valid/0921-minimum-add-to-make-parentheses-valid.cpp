class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        for(auto i: s){
            if(st.empty()){
                st.push(i);
            }
            else if(i==')' && st.top()=='('){
                st.pop();
            }
            else{
                st.push(i);
            }
        }
        
        return st.size();
    }
};