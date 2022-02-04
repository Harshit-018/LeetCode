class Solution {
public:
    string removeOccurrences(string s, string part) {
        int len=part.size();
        int index=s.find(part);
        while (index != string::npos){
            s.erase(s.begin()+index,s.begin()+index+len);
            index =s.find(part);        
        }
        return s;
    }
};