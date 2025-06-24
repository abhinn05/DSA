class Solution {
    int dx[8] = {-1,-1,-1,0,+1,+1,+1,0};
    int dy[8] = {-1,0,+1,+1,+1,0,-1,-1};
    
    bool search(int x, int y,vector<vector<char>> grid,string word,int n,int m)
    {
        for(int dir=0;dir<8;dir++)
        {
            int k,nx = x, ny=y;
            
            for(k=0;k<word.length();k++)
            {
                if(nx < 0 || nx >= n || ny < 0 || ny >= m || grid[nx][ny] != word[k]) break;
                
                nx += dx[dir];
                ny += dy[dir];
            }
            if(k == word.length()) return true;
        }
        return false;
    }
  public:
    vector<vector<int>> searchWord(vector<vector<char>> grid, string word) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> result;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(word[0] == grid[i][j] && search(i,j,grid,word,n,m))
                {
                    result.push_back({i,j});
                }
            }
        }
        return result;
    }
};