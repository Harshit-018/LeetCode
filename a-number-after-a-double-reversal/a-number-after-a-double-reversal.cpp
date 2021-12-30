class Solution {
public:
    bool isSameAfterReversals(int num) {
        int i,rev=0,rev1=0;
        for(i=num;i>0;i/=10)
            rev=rev*10+i%10;
        for(i=rev;i>0;i/=10)
            rev1=rev1*10+i%10;
        if(num==rev1)
            return true;
        else
            return false;
    }
};