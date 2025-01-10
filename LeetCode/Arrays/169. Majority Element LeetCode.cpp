class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int result = 0;
        sort(nums.begin(),nums.end());
        if(n == 1)
        {
            result = nums[0];
            return result;
        }
        for(int i=0;i<n-1;i++)
        {
            if(nums[i] == nums[i+1])
            {
                count++;
                if(count>=(n/2))
                {
                    result = nums[i];
                    break;
                }
            }
            else
            {
                count = 0;
            }
            
        }
        return result;
    }
};