class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            int min = i;
            for(int j=i+1;j<n;j++)
            {
                if(nums[j] < nums[min])
                {
                    min = j;
                }
            }
            if(min != i)
            {
                swap(nums[i],nums[min]);
            }
        }  
    }
};