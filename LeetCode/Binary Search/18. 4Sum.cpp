class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            for(int j=i+1;j<n;j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                
                int left = j+1;
                int right = n-1;
                while (left < right) 
                {
                    long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                    vector<int> lvl;
                    if (sum == target) 
                    {
                        lvl.push_back(nums[i]);
                        lvl.push_back(nums[j]);
                        lvl.push_back(nums[left]);
                        lvl.push_back(nums[right]);
                        ans.push_back(lvl);
                        left++;
                        right--;

                        while (left < right && nums[left] == nums[left - 1]) left++; 
                        while (left < right && nums[right] == nums[right + 1]) right--; 
                    }
                    else if (sum < target) 
                    {
                        left++;
                    }
                    else 
                    {
                        right--;
                    }
                }
            }
        }
        return ans;
    }
};