class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> hash;
        int c=0;
        int ans=0;
        for (auto i:nums1)
        {
            for (auto j:nums2)
            {
                hash[i+j]++;
            }
        }
        for (auto k:nums3)
        {
            for (auto l:nums4)
            {
                ans+=hash[-(k+l)];
            }
        }
       return ans; 
    }
};