class Solution {
public:
    void solve(vector<int>& nums, set<vector<int>>& ans, vector<int>& ds, int curr, int prev, int n){
        if(curr == n){                                                                // step 2
            ans.insert(ds);
            return;
        }
        
        if(prev == -1 || nums[curr] >= nums[prev]){                                   // step 1
            ds.push_back(nums[curr]);
            solve(nums, ans, ds, curr+1, curr, n);
            ds.pop_back();
        }
        solve(nums, ans, ds, curr+1, prev, n);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> res;
        set<vector<int>> ans;
        vector<int> ds;
        solve(nums, ans, ds, 0, -1, nums.size());
        for(auto i: ans){                                                              // step 3 
            if(i.size() > 1)
                res.push_back(i);
        }
        return res;
    }
};