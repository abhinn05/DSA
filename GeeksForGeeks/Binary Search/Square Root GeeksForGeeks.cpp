class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        int x = n+1;
        vector<int> arr(x);
        for(int i=0;i<n+1;i++)
        {
            arr[i] = i * i;
        }
        int low = 0;
        int high = x-1;
        int floor = -1;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(arr[mid] == n)
            {
                return mid;
            }
            else if(arr[mid] < n)
            {
                floor = mid;
                low = mid + 1;
            }
            else if(arr[mid] > n)
            {
                high = mid - 1;
            }
        }
        return floor;
    }
};