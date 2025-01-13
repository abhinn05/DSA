class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int floor = -1;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(nums[mid] == target)
            {
                floor = mid;
                high = mid - 1;
            }
            else if(target < nums[mid])
            {
                high = mid - 1;
            }
            else if(target > nums[mid])
            {
                low = mid + 1;
            }
        }
        int ceil = -1;
        int low1 = 0;
        int high1 = n-1;
        while(low1<=high1)
        {
            int mid = low1 + (high1-low1)/2;
            if(nums[mid] == target)
            {
                ceil = mid;
                low1 = mid + 1;
            }
            else if(target < nums[mid])
            {
                high1 = mid - 1;
            }
            else if(target > nums[mid])
            {
                low1 = mid + 1;
            }
        }
        vector<int> result;
        result.push_back(floor);
        result.push_back(ceil);
        return result;
    }
};