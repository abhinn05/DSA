class Solution{
    private:
    void bfs(int row, int col, vector<vector<int>>& vis, vector<vector<char>>& grid)
    {
        vis[row][col] = 1;
        queue<pair<int,int>> q;
        q.push({row,col});
        int n = grid.size();
        int m = grid[0].size();
        while(!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int delrow = -1;delrow<=1;delrow++)
            {
                for(int delcol = -1;delcol<=1;delcol++)
                {
                    int nrow = row+delrow;
                    int ncol = col+delcol;

                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol] == '1')
                    {
                        vis[nrow][ncol] = 1;
                        q.push({nrow,ncol});
                    }
                }
            }
        }
    }
public:
    int numIslands(vector<vector<char>> &grid){
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int count = 0;

        for(int row = 0;row<n;row++)
        {
            for(int col = 0;col<m;col++)
            {
                if(!vis[row][col] && grid[row][col] == '1')
                {
                    count++;
                    bfs(row,col,vis,grid);
                }
            }
        }
        return count;
    }
};
