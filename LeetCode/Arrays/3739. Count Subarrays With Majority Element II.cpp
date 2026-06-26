class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> freq(2 * n+1,0);

        freq[n] = 1;
        int idx = n;

        long long res = 0, pref = 0;

        for(int x : nums)
        {
            if(x == target)
            {
                pref += freq[idx];
                idx++;
            }
            else
            {
                idx--;
                pref -= freq[idx];
            }
            freq[idx]++;
            res += pref;
        }    
        return res;
    }
};