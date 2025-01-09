class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int result = 0;

        int i =0;
        if(n == 1)
        {
            return nums[0];
        }
        while(i<n-1)
        {
            if(nums[i] != nums[i+1])
            {
                result = nums[i];
                break;
            }
            else
            {
                i = i + 2;
                result = nums[n-1];
            }
        }
        
        return result;
    }
};