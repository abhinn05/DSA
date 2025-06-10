class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = *max_element(nums.begin(),nums.end());
        int ans = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == n) ans = i;
        }
        return ans;
    }
};