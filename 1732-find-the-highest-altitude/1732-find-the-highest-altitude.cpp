class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> alt;
        int ch=0;
        for (int i=0;i<gain.size();i++)
        {
            ch+=gain[i];
            alt.push_back(ch);
        }
        alt.push_back(0);
        ch=*max_element(alt.begin(), alt.end());
        return ch;
    }
};