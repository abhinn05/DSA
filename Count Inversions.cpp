class Solution {
public:
   long long int numberOfInversions(vector<int> nums) {
        long long ans = 0;
        int n = nums.size();
        int i = 0;
        while(i<n-1)
        {
            int j = i+1;
            while(j<n)
            {
                if(nums[i] > nums[j]) ans++;

                j++;
            }
            i++;
        }
        return ans;
    }
};