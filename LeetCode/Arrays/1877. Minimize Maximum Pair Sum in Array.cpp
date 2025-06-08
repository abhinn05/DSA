class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        sort(nums.begin(),nums.end());

        int left = 0;
        int right = n - 1;

        while(left<right)
        {
            int sum = nums[left] + nums[right];
            ans = max(ans,sum);
            left++;
            right--;
        }
        return ans;
    }
};