class Solution {
public:
    string dectobin(int n)
    {
        string bin;
        int i = 0;
        while (n > 0) 
        {
            bin=to_string(n%2)+bin;
            n = n / 2;
            i++;
        }
        return bin;
    }
    bool queryString(string s, int n) 
    {
        for (int i=1;i<=n;i++)
        {
            string temp=dectobin(i);
            if(s.find(temp)== string::npos)
                return false;
        }
        return true;
    }
};