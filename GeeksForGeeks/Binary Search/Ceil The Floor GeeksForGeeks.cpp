class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int low = 0;
        int high = n-1;
        int floor = -1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(x == arr[mid])
            {
                floor = arr[mid];
                break;
            }
            else if(x < arr[mid])
            {
                high = mid - 1;
            }
            else if(x > arr[mid])
            {
                floor = arr[mid];
                low = mid + 1;
            }
        }
        int low1 = 0;
        int high1 = n-1;
        int ceil = -1;
        while(low1<=high1)
        {
            int mid1 = low1 + (high1-low1)/2;
            if(x == arr[mid1])
            {
                ceil = arr[mid1];
                break;
            }
            if(x < arr[mid1])
            {
                ceil = arr[mid1];
                high1 = mid1 - 1;
            }
            else if(x > arr[mid1])
            {
                low1 = mid1 + 1;
            }
            
        }
        vector<int> result;
        result.push_back(floor);
        result.push_back(ceil);
        return result;;
        
    }
};