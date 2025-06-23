class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        int l = 0;
        int r = n - 1;
        int lmax = 0;
        int rmax = 0;

        while(l < r)
        {
            lmax = max(lmax,height[l]);
            rmax = max(rmax,height[r]);

            if(lmax < rmax)
            {
                ans = ans + lmax - height[l];
                l++;
            }
            else
            {
                ans = ans + rmax - height[r];
                r--;
            }
        }
        return ans;
    }
};