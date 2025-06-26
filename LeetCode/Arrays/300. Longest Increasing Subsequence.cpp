class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> a;
        for(int x : nums)
        {
            if(a.empty() || a[a.size() - 1] < x)
            {
                a.push_back(x);
            }
            else
            {
                auto it = lower_bound(a.begin(),a.end(),x);
                *it = x;
            }
        }
        return a.size();
        
    }
};