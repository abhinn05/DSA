class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        
        int l = 1;
        int r = *max_element(nums.begin(),nums.end());
        int ans = r;
        while(l<=r)
        {
            int m = (l+r) >> 1;
            int sum = 0;
           for(int num : nums)
           {
                sum = sum + ceil((float)num/m);
           }
            if(sum>threshold)
            {
                l = m+1;
            }
            else
            {
                ans = m;
                r = m-1;
            }
        }
        return ans;
    }
};