class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            if(nums[i] == 0)
            {
                auto it = find(nums.begin(),nums.end(),nums[i]);
                nums.erase(it);
                nums.push_back(0);
            }
        }
    }
};