class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length();
        int m = t.length();
        
        map<char, vector<int>> mp;
        
        for(int i=0; i<m; i++){
            mp[t[i]].push_back(i);
        }
        
        int prev = -1;
        for(int j=0; j<n; j++){
            char ch = s[j];
            
            if(mp.find(ch)==mp.end()) return false;
            
            vector<int> index = mp[ch];
            
            auto it = upper_bound(begin(index), end(index), prev);
            
            if(it == index.end()) return false;
            
            prev = *it;
        }
        return true;
    }
};