class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        vector<int> ans;
        int n = arr.size();
        int start = 0, end = 0, sum = 0;
        
        while(end<n)
        {
            sum += arr[end];
            
            while(sum>target && start<=end)
            {
                sum -= arr[start];
                start++;
            }
            if(sum == target)
            {
                ans.push_back(start+1);
                ans.push_back(end+1);
                return ans;
            }
            end++;
        }
        
        ans.push_back(-1);
        return ans;
    }
};