class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev=-1;
        s.push_back(' ');
        string num;
        for (int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
                num+=s[i];
            else if(s[i]==' '&& isdigit(s[i-1]))
            {
                if(stoi(num)<=prev)
                    return false;
                prev=stoi(num);
                num="";
            }
        }
        return true;
    }
};