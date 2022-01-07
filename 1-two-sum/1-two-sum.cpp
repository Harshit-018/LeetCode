class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> count;
        bool f=false;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                count.push_back(i);
                count.push_back(j);
                f=true;
                }
            }
                if (f==true)
                    break;
        }
    return count;
    }
};