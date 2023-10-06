class Solution {
public:
    int solve(int n, vector<int> &dp){
        if(n==1) return 1;
        
        if(dp[n]!=-1) return dp[n];
        
        int maxi = INT_MIN;
        for(int i=1;i<n;i++)
        {
            int prod = i * max(n-i, solve(n-i, dp));
            maxi = max(maxi, prod); 
        }
        return dp[n] = maxi;
    }
    
    int integerBreak(int n) {
        vector<int> dp(n+1,-1);
        return solve(n, dp);
    }
};