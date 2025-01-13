class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        int start = -1;
        int end = -1;
        
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(arr[mid] == target)
            {
                start = mid;
                high = mid - 1;
            }
            else if(arr[mid] > target)
            {
                high = mid - 1;
            }
            else if(arr[mid] < target)
            {
                low = mid + 1;
            }
        }
        
        int low1 = 0;
        int high1 = n - 1;
        while(low1<=high1)
        {
            int mid = low1 + (high1-low1)/2;
            if(arr[mid] == target)
            {
                end = mid;
                low1 = mid + 1;
            }
            else if(arr[mid] > target)
            {
                high1 = mid - 1;
            }
            else if(arr[mid] < target)
            {
                low1 = mid + 1;
            }
        }
        if (start == -1 || end == -1) 
        {
            return 0;
        }
        int count = end - start + 1;
        return count;
    }
};
