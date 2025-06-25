class Solution {
  public:
    int LongestRepeatingSubsequence(string &s) {
        // Code here
        int n = s.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(s[i-1] == s[j-1] && i != j) dp[i][j] = 1 + dp[i-1][j-1];
                else dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
        }
        
        return dp[n][n];
    }
};