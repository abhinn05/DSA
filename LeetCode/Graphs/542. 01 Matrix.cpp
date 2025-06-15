class Solution {
public:
    vector<int> dir = {0,1,0,-1,0};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        queue<pair<int,int>> q;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j] == 0) q.emplace(i,j);
                else mat[i][j] = -1;
            }
        }

        while(!q.empty())
        {
            auto [r,c] = q.front();
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nr = r+dir[i];
                int nc = c+dir[i+1];

                if(nr<0 || nr == m || nc<0 || nc == n || mat[nr][nc] != -1) continue;
                mat[nr][nc] = mat[r][c] + 1;
                q.emplace(nr,nc);
            }
        }
        return mat;
        
    }
};