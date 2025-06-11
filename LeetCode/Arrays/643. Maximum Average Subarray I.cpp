class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        if(n== 1) return nums[0];

        double sum = 0;
        for(int i=0;i<k;i++)
        {
            sum = sum + nums[i];
        }
        double ans = sum;
        for(int i=k;i<n;i++)
        {
            sum = sum - nums[i-k] + nums[i];
            ans = max(ans,sum);
        }
        return ans/k;
    }
};