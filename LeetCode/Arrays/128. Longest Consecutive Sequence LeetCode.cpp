class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0; 

        sort(nums.begin(), nums.end());
        int n = nums.size();

        int maxLength = 1; 
        int longest = 1;   

        for (int i = 1; i < n; i++) 
        {
            if (nums[i] == nums[i - 1]) 
            {
                continue;
            } 
            else if (nums[i] - nums[i - 1] == 1) 
            {
                maxLength++;
                longest = max(longest, maxLength);
            } 
            else 
            {
                maxLength = 1; 
            }
        }
        return longest;
    }
};
