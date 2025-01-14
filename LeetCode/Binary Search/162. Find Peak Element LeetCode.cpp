class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return -1;
        if(n==1) return 0;
        int ans = -1;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i] >= nums[i+1])
            {
                return i;
            }
            if(nums[i+1] == nums[i] + 1)
            {
                ans = i+1;
            }
        }
        return ans;
    }
};