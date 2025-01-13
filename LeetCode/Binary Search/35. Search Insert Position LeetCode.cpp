class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int ans = 0;
        while(low<=high)
        {
            int mid = low + (high - low)/2;
            if(target == nums[mid])
            {
                return mid;
            }
            else if(target < nums[mid])
            {
                high = mid - 1;
            }
            else if(target > nums[mid])
            {
                ans = mid + 1;
                low = mid + 1;
            }
        }
        return ans;
    }
};