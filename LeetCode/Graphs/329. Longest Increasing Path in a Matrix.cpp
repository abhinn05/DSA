class Solution {
public:
    vector<vector<int>> dp;
    vector<int> dx = {-1, 1, 0, 0};
    vector<int> dy = {0, 0, -1, 1};
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        dp.resize(m,vector<int>(n,-1));
        int maxi = 1;

        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                dp[i][j] = dfs(i,j,matrix);
                maxi = max(maxi,dp[i][j]);
            }
        }
        return maxi;
    }

    int dfs(int i,int j,vector<vector<int>>& matrix)
    {
        int ans = 0, n = matrix[0].size(), m = matrix.size();

        for(int k=0;k<4;++k)
        {
            int nx = i + dx[k];
            int ny = j + dy[k];

            if(nx < 0 || ny < 0 || nx >= m || ny >= n || matrix[i][j] >= matrix[nx][ny]) continue;
            if(dp[nx][ny] != -1) ans = max(ans,dp[nx][ny]);
            else ans = max(ans,dfs(nx,ny,matrix));
        }

        return dp[i][j] = ans + 1;
    }
};