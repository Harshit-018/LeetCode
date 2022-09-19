class Solution {
public:
    string largestGoodInteger(string num) {
        char ch='-';
        int ans = -1;
        for(int i=0;i<num.size()-2;i++)
        {
            if (num[i]==num[i+1] && num[i+1]==num[i+2]){
                if(num[i]>ch){
                    ch= num[i];
                    ans = i;
                }
            }
        }
        if (ans==-1) return "";
        else return num.substr(ans,3);
    }
};