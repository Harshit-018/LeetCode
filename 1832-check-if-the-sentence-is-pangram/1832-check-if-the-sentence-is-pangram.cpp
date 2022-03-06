class Solution {
public:
    bool checkIfPangram(string sentence) {
        int freq[26]={0};
        for (auto it:sentence)
            freq[it-'a']++;
        int i=0;
        for (int i=0;i<26;i++){
            if(freq[i]==0)
                return false;
        }
        return true;
        
        
    }
};