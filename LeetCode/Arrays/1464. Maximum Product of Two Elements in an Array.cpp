class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();

        int prod = (nums[0] - 1) * (nums[1] - 1);
        int prod1 = (nums[n-1] - 1) * (nums[n-2] - 1);
        int result = max(prod,prod1);

        return result;
    }
};