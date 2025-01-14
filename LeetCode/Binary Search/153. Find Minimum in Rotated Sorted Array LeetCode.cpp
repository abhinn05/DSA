class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];
        if(n==2)
        {
            if(nums[0] > nums[1]) return nums[1];
            if(nums[0] < nums[1]) return nums[0];
        }

        int result = INT_MAX;
        int ans = INT_MAX;
        int low = 0;
        int high = n - 1;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(nums[mid] < result)
            {
                result = nums[mid];
            }
            if(ans > result)
            {
                ans = result;
            }
            if(nums[low] <= nums[mid])
            {
                result = nums[low];
                low = mid + 1;
            }
            else if(nums[mid]<=nums[high])
            {
                result = nums[mid];
                high = mid - 1;
            }
                        
        }
        return ans;
    }
};