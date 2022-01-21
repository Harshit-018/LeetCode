class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int c=0;
        for (auto a:patterns)
        {
            if (word.find(a)!= -1)
                c+=1;
        }
        return c;
    }
};