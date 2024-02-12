class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        
        for(auto i : nums){
            mp[i]++;
        }
        
        int maxi=0;
        int ans=-1;
        for(auto j: mp){
            if(j.second>maxi){
                maxi=j.second;
                ans=j.first;
            }
        }
        return ans;
    }
};