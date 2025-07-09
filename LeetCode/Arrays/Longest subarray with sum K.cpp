class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        int sum = 0, maxi = 0;

        for(int i = 0; i < nums.size(); i++) 
        {
            sum += nums[i];

            if(sum == k) maxi = i +1;

            if(map.find(sum - k) != map.end()) maxi = max(maxi, i - map[sum - k]);

            if(map.find(sum) == map.end()) map[sum] = i;
        }

        return maxi;
    }
};
