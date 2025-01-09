class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int result = 0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i] == 1)
            {
                ans++;
            }
            else
            {
                ans = 0;
            }
            if(ans > result)
            {
                result = ans;
            }
        }
        return result;
    }
};