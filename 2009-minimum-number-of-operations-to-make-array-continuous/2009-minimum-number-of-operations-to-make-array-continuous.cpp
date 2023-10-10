class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        
        set<int>st(nums.begin(),nums.end());
        vector<int>temp(st.begin(),st.end());
        
        int result = INT_MAX;
        
        for(int i=0; i<temp.size(); i++){
            //l+r=n-1
            int l = temp[i];
            int r = n-1+l;
            
            int j = upper_bound(temp.begin(),temp.end(), r) - temp.begin();
            int in_range = j - i;
            int out_bound = n - in_range;
            
            result=min(result, out_bound);
        }
        return result;
        
    }
};