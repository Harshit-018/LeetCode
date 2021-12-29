class Solution {
public:
    vector<int> sumZero(int n) {
        int i;
        vector<int> sum;
        for (i=1;i<=n/2;i+=1)
        {
            sum.push_back(i);
            sum.push_back(-i);
        }
        if (n%2!=0)
        {
            sum.push_back(0);
            
        }
        return sum;
    }
};