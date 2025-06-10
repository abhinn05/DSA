class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        int a = -1;
        int b = -1;
        vector<int> ans;
        if(n==1 && nums[0] == target)
        {
            ans.push_back(0);
            ans.push_back(0);
            return ans;
        }
        while(l<r)
        {
            while(l<r && nums[l] != target) l++;

            while(l<r && nums[r] != target) r--;

            if(nums[l] == target && nums[r] == target)
            {
                a=l;
                b=r;
                break;
            }
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};