class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> answer;
        int count=0;
        int b=0;
        for (int i=0;i<boxes.size();i++)
        {
            for (int j=0;j<boxes.size();j++)
            {
                if (boxes.at(j)=='1')
                { 
                    b=j-i;
                    if (b<0)
                        b=b*-1;
                    count+=b;
                }
            }
            
            answer.push_back(count);
            count=0;
        }        
        return answer;
    }
};