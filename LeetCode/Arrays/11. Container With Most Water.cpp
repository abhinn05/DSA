class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int a = 0;
        int b = 0;
        int result = 0;
        int left = 0;
        int right = n-1;

        while(left<right)
        {
            a = min(height[left],height[right]);
            b = right - left;
            result = max(result,a*b);

            if(height[left] < height[right]) left++;
            else right--;
        }
        return result;
    }
};