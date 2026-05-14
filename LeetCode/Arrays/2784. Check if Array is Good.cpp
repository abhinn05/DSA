class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());

        int a = 1;
        int i = 0;
        while(i<n-1)
        {
            if(nums[i] != a) return false;
            i++;
            a++;
        }
        if(nums[n-1] != n-1) return false;
        return true;
    }
};