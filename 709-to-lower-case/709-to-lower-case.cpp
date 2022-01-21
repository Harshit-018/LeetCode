class Solution {
public:
    string toLowerCase(string s) {
        string a;
        for (int i=0;i<s.size();i++)
        {
            char c=s[i];
            char l=tolower(c);
            a.push_back(l);
        }
        return a;
    }
};