class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        int result = arr[0];
        int maxi = arr[0];
        
        for(int i=1;i<arr.size();i++)
        {
            maxi = max(arr[i] + maxi,arr[i]);
            
            result = max(result,maxi);
        }
        return result;
    }
};