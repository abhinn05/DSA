class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int ans = 0;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(arr[low] <= arr[high])
            {
                return low;
            }
            if(mid>0 && arr[mid] < arr[mid-1])
            {
                ans = mid; 
                break;
            }
            if(mid<n-1 && arr[mid]>arr[mid+1])
            {
                ans = mid + 1;
                break;
            }
            if(arr[low] <= arr[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return ans;
    }
};