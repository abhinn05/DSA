class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int m = n/3;
        unordered_map<int,int> ans;

        for(int num : nums)
        {
            ans[num]++;
        }
        vector<int> result;
        for(auto& [key,val] : ans)
        {
            if(val > m)
            {
                result.push_back(key);
            }
        }
        return result;
    }
};