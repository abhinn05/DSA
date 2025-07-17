class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int total = n*n;
        int count = 0;

        int startRow = 0;
        int startCol = 0;
        int endRow = n - 1;
        int endCol = n - 1;
        vector<vector<int>> matrix(n,vector<int>(n));
        int num = 1;

        while(count < total)
        {
            for(int i=startCol;i<=endCol && count<total;++i)
            {
                matrix[startRow][i] = num;
                num++;
                count++;
            }
            startRow++;

            for(int i=startRow;i<=endRow && count<total;++i)
            {
                matrix[i][endCol] = num;
                num++;
                count++;
            }
            endCol--;

            for(int i=endCol;i>=startCol && count<total;--i)
            {
                matrix[endRow][i] = num;
                num++;
                count++;
            }
            endRow--;            
            
            for(int i=endRow;i>=startRow && count<total;--i)
            {
                matrix[i][startCol] = num;
                num++;
                count++;
            }
            startCol++;
        }
        return matrix;
    }
};