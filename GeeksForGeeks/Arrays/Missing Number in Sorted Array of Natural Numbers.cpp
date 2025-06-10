class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        // Code here
        int n = arr.size();
        int ans = 0;
        int j = 1;
        for(int i=0;i<n;i++)
        {
            if(arr[i] != j) 
            {
                ans = j;
                break;
            }
            j++;
        }
        return ans;
    }
};