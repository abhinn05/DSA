class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        long long count = 0;

        for(int i=0;i<n;++i)
        {
            int targetcnt = 0;

            for(int j=i;j<n;++j)
            {
                if(nums[j] == target) targetcnt++;

                int len = j - i + 1;
                if(targetcnt > len/2) count++;
            }            
        }
        return count;
    }
};