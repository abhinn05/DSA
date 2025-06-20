class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 2;
        if(nums.size() <=2) return nums.size();
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i] != nums[count-2])
            {
                nums[count] = nums[i];
                count++;
            }
        }
        return count;
    }
};