class Solution {
public:
    int check(vector<vector<int>>& board,int i,int j)
    {
        int drow[8] = {-1,-1,-1,0,1,1,1,0};
        int dcol[8] = {-1,0,1,1,1,0,-1,-1};
        int live = 0;
        for(int k=0;k<8;k++)
        {
            int nrow = i + drow[k];
            int ncol = j + dcol[k];
            if(nrow >= 0 && nrow < board.size() && ncol >=0  && ncol < board[0].size())
            {
                if(abs(board[nrow][ncol]) == 1) live++;
            }
        }
        return live;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int live = check(board,i,j);
                if(board[i][j] == 1 && (live<2 || live>3))
                {
                    board[i][j] = -1;
                }
                else if(board[i][j] == 0 && live == 3)
                {
                    board[i][j] = 2;
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j] < 0) board[i][j] = 0;
                else if(board[i][j] > 0) board[i][j] = 1;
            }
        }
    }
};