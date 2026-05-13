class Solution {
public:
    int minMoves(vector<int>& nums, int limit) {
        int n = nums.size();
        unordered_map<int,int> count;
        vector<int> min_arr, max_arr;
        min_arr.reserve(n/2);
        max_arr.reserve(n/2);

        for(int i=0;i<n/2;++i)
        {
            int a = min(nums[i],nums[n-1-i]);
            int b = max(nums[i],nums[n-1-i]);

            count[a+b]++;
            min_arr.push_back(a);
            max_arr.push_back(b);
        }

        sort(min_arr.begin(),min_arr.end());
        sort(max_arr.begin(),max_arr.end());

        int ops = n;

        for (int c = 2; c <= 2 * limit; ++c) 
        {
            int add_left = n / 2 - (lower_bound(min_arr.begin(), min_arr.end(), c) - min_arr.begin());
            int add_right = lower_bound(max_arr.begin(), max_arr.end(), c - limit) - max_arr.begin();
            int current_ops = n / 2 + add_left + add_right - count[c];
            ops = min(ops, current_ops);
        }

        return ops;
    }
};