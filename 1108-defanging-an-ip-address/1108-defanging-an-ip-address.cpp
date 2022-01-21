class Solution {
public:
    string defangIPaddr(string address) {
        
        for (int i=1;i<address.size();i++)
        {
            if (address.at(i)=='.')
            {
                address.insert(i+1,"]");
                address.insert(i,"[");
                i+=2;
            }
        }
        return address;
    }
};