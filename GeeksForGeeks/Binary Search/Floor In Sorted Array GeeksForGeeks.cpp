class Solution {
  public:

    int findFloor(vector<int>& arr, int k) {

        // Your code here
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int floor = -1;
        while(low<=high)
        {
            int mid = low + (high - low)/2;
            if(k == arr[mid])
            {
                return mid;
            }
            else if(k < arr[mid])
            {
                high = mid - 1;
            }
            else if(k > arr[mid])
            {
                floor = mid;
                low = mid + 1;
            }
            
            
        }
        return floor;
    }
};