class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i] == nums[i-1]) continue;
            int j = i+1;
            int k = n-1;
            while(j<k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                vector<int> lvl;
                if(sum == 0)
                {
                    lvl.push_back(nums[i]);
                    lvl.push_back(nums[j]);
                    lvl.push_back(nums[k]);
                    ans.push_back(lvl);
                    while (j < k && nums[j] == nums[j + 1]) j++;
                    while (j < k && nums[k] == nums[k - 1]) k--;
                    j++;
                    k--;
                }
                else if(sum < 0)
                {
                    j++;
                }
                else k--;
            }
            

        }
        return ans;
    }
};