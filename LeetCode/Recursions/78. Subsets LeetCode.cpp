class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        int total = 1 << n;

        for(int i=0;i<total;i++)
        {
            vector<int> subset;
            for(int j=0;j<n;j++)
            {
                if(i & (1 << j))
                {
                    subset.push_back(nums[j]);
                }
            }
            result.push_back(subset);
        }
        return result;

    }
};