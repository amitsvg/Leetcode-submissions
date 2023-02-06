class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.size();
        int n = b.size();
        string str="";
        if(m>n){
            int diff=m-n;
            n=m;
            for(int i=0; i<diff;i++)b='0'+b;
        }
        else if(n>m){
            int diff=n-m;
            for(int i=0; i<diff;i++)a='0'+a;
            m=n;            
        }
        int c=0;
        int i=m-1;
        while(i>=0){
            // int sum = ((a[i]+'0') + (b[i]+'0') + c)%2;
            int sum = (a[i] + b[i] + c)%2;
            c = ((a[i]-'0') + (b[i]-'0') + c)/2;
            str = to_string(sum) + str;
            i--;
        }
        if(c==1) str = '1' + str;
        return str;
    }
};