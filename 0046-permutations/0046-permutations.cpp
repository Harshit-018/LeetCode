class Solution {
public:
    vector<vector<int>> ans;
    
    void solve(vector<int>& nums, vector<int>& subNums, int c){
        if(c==nums.size()){
            ans.push_back(subNums);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(subNums[i]==11){
                subNums[i]= nums[c];
                solve(nums, subNums, c+1);
                subNums[i]=11;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n= nums.size();
        vector<int> subNums(n,11);
        solve(nums,subNums,0);
        return ans;   
    }
};