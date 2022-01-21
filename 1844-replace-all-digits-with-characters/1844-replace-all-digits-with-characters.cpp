class Solution {
public:
    string replaceDigits(string s) {
        for (int i=1;i<s.size();i+=2)
        {
            if (s[i]>=48 && s[i]<=57)
            {
                s[i]=s[i-1]+s[i]-'0';
            }
        }
        return s;
    }
};