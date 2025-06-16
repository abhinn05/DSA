class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int row = -1;

        if(n==1)
        {
            int l = 0;
            int r = m-1;
            while(l<=r)
            {
                if(matrix[0][l] == target || matrix[0][r] == target) return true;
                l++;
                r--;
            }
            return false;
        }
        for(int i=0;i<n;i++)
        {
            if(matrix[i][0] > target)
            {
                row = i-1;
                break;
            }
            else if(matrix[i][0] == target) return true;
        }
        if(matrix[n-1][0] < target)
        {
            row = n-1;
        }
        if(row<0) return false;
        int l = 0;
        int r = m-1;
        while(l<=r)
        {
            if(matrix[row][l] == target || matrix[row][r] == target) return true;
            l++;
            r--;
        }
        return false;
    }
};