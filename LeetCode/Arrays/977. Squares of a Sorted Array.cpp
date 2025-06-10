class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();

        for(int i=0;i<n;i++)
        {
            nums[i] = nums[i] * nums[i];
        }
        for(int i=0;i<n;i++)
        {
            int min = i;
            for(int j=i+1;j<n;j++)
            {
                if(nums[min] > nums[j])
                {
                    min = j;
                }
            }
            swap(nums[i],nums[min]);
        }
        return nums;
    }
};