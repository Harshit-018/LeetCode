class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> alpha(26);
        for (auto i: s){
            alpha[i - 'a']++;
        }
        
        for(int i = 0; i<s.size(); i++){
            if(alpha[s[i] - 'a']==1) return i;
        }
        return -1;
    }
};