class Solution {
public:
    int result(vector<int>& a , int threshold)
    {
        int sum = 0;
        for(int num : a)
        {
            sum = sum + (num + threshold - 1) / threshold;
        }
        
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int ans = -1;
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while(low<=high)
        {
            int mid = low + (high-low)/2;
            int sum = result(nums,mid);
            if(sum<=threshold)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};