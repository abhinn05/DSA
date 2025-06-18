class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> ans;

        int delrow[] = {-1, 0, +1, 0};
        int delcol[] = {0, +1, 0, -1};

        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++) 
            {
                bool isPeak = true;
                for (int k = 0; k < 4; k++) 
                {
                    int nrow = i + delrow[k];
                    int ncol = j + delcol[k];

                    if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m) 
                    {
                        if (mat[nrow][ncol] > mat[i][j]) 
                        {
                            isPeak = false;
                            break;
                        }
                    }
                }

                if (isPeak) 
                {
                    return {i, j}; 
                }
            }
        }
        return {}; 
    }
};
