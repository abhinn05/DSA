class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        int n = arr.size();
        int mini = arr[0];
        for(int i=1;i<n;i++)
        {
            if(mini > arr[i])
            {
                mini = arr[i];
            }
        }
        return mini;
    }
};