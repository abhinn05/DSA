vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>> matrix(A,vector<int> (A));
    int count = 0;
    int total = A*A;
    int startRow = 0, endRow = A-1;
    int startCol = 0, endCol = A-1;
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
