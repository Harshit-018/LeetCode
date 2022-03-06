class Solution {
public:
    bool checkpal(string s,int i,int n){
        if (i>=n/2)
            return true;
        if (s[i]==s[n-i-1])
            return checkpal(s,i+1,n);
        return false;
    }
    string firstPalindrome(vector<string>& words)
    {
        for(auto c:words)
        {
            if(checkpal(c,0,c.size()))
               return c;
        }
        return "";
    }
};