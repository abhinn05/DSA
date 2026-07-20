class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid[0].size();
        int m = grid.size();

        int total = m*n;
        k %= total;

        vector<vector<int>> ans(m,vector<int>(n));

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int old = i*n+j;
                int newi = (old + k) % total;
                ans[newi/n][newi%n] = grid[i][j];
            }
        }
        return ans;
    }
};