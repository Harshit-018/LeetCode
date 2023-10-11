class Solution {
public:
    int solve(int ind1, int ind2, string text1, string text2, vector<vector<int>> &dp){
        if(ind1<0 || ind2<0) return 0;
        if(dp[ind1][ind2] != -1) return dp[ind1][ind2];
        int match = 0;
        //match
        if(text1[ind1]==text2[ind2]){
            match = 1 + solve(ind1-1,ind2-1,text1,text2, dp);
        }
        
        //notMAtch
        int notMatch = max(solve(ind1,ind2-1,text1,text2,dp),solve(ind1-1,ind2,text1,text2, dp));
        
        return dp[ind1][ind2] = max(match,notMatch);
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1,0));
        
        for(int ind1 = 1; ind1<=n; ind1++){
            for(int ind2 = 1; ind2<=m; ind2++){
                int match = 0;
                //match
                if(text1[ind1-1]==text2[ind2-1]){
                    dp[ind1][ind2] = 1 + dp[ind1-1][ind2-1];
                }
                else dp[ind1][ind2] = max(dp[ind1][ind2-1],dp[ind1-1][ind2]);
            }
        }
        
        return dp[n][m];
    }
};