class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
        vector<vector<int>> dp(k,vector<int>(k,0));
        int mx = 0;

        for(int num : nums)
        {
            for(int i=0;i<k;++i)
            {
                int rem = num % k;
                mx = max(mx,dp[rem][i] = dp[i][rem] + 1);
            }
        }
        return mx;
    }
};