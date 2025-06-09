class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int i = 0;
        while(i<nums.size())
        {
            if(nums[i] == val)
            {
                auto it = nums.begin() + i;
                if(it != nums.end())
                {
                    nums.erase(it);
                }
            }
            else i++;
        }
        int m = nums.size();
        return m;
    }
};