class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        // vector<vector<int>> ans;

        int n = image.size();

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<image[i].size();j++)
            {
                if(image[i][j] == 0) image[i][j] = 1;
                else image[i][j] = 0;
            }
        }
        for(int i=0;i<n;i++)
        {
            int left = 0;
            int right = image[i].size() - 1;
            while(left < right)
            {
                swap(image[i][left],image[i][right]);
                left++;
                right--;
            }
        }
        return image;
    }
};