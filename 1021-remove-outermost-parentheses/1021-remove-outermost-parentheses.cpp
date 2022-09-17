class Solution {
public:
    string removeOuterParentheses(string s) {
        int counter=0;
        string ans;
        for(auto c:s)
        {
            if(c=='(')
            {
                if(counter>0){
                    ans+='(';
                }
                counter++;
            }
            else
            {
                if(counter>1)
                {
                    ans+=')';
                }
                counter--;
            }
        }
        return ans;
    }
};