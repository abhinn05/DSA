class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = 0;
        int left = 0;
        int right = n - 1;
        
        while(left<=right)
        {
            if(nums[left] != target && nums[right] != target)
            {
                left++;
                right--;
            }
            else if(nums[left] == target) 
            {
                ans = left;
                return ans;
            }
            else if(nums[right] == target) 
            {
                ans = right;
                return ans;
            }
        }
        return -1;
    }
};