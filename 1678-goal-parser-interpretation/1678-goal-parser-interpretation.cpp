class Solution {
public:
    string interpret(string command) {
        string ans;
        for (int i=0;i<command.size();i++)
        {
            if (command.at(i)=='G')
                ans+="G";
            if (command.at(i)=='(')
                 if (command.at(i+1)==')')
                     ans+="o";
            if (command.at(i)=='a')
                ans+="al";
        }
        return ans;
    }
};