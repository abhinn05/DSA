class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();

        int result = 0;
        int prod = nums[0] * nums[1] * nums[n-1];
        int prod1 = nums[n-1] * nums[n-2] * nums[n-3];
        result = max(prod,prod1);

        return result;
    }
};