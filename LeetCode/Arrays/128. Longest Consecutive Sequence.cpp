class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int count = 1,result = 1;
        if(n==0) return 0;
        if(n==1) return count;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i+1] == nums[i]+1)
            {
                count++;
            }
            else if(nums[i+1] == nums[i]) 
            {
                continue;
            }
            else
            {
                count=1;
            }
            result = max(result,count);
        }
        return result;
    }
};