class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        int small = nums[0];
        int large = nums[n-1];

        if(small == large) return large;

        for(int i=large/2;i>=1;i--)
        {
            if(large % i == 0 && small % i == 0) return i;
        }

        return 1;
    }
};