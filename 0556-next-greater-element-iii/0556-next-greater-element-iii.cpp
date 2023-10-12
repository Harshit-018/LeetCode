class Solution {
public:
    int nextGreaterElement(int n) {
        string s= to_string(n);
        int len = s.size();
        int i;
        //finding first decreasing number
        for(i=len-2; i>=0; i--){
            if(s[i]<s[i+1]) break;
        }
        if(i<0) return -1;
        
        //finding first num greater than s[i]
        for(int j=len-1; j>i; j--){
            if(s[j]>s[i]){
                swap(s[j],s[i]);
                break;
            }
        }
        
        reverse(s.begin()+i+1,s.end());
        
        long num = stol(s);
        
        return num>INT_MAX ? -1 : num;
        
    }
};