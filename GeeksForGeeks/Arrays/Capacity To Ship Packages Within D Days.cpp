class Solution {
  public:
    bool isPossible(int arr[], int n, int d, int cap) {
        int days = 1; 
        int load = 0;
        
        for (int i = 0; i < n; i++) 
        {
            if (load + arr[i] > cap) 
            {
                days++;
                load = arr[i];
                if (days > d) return false;
            } 
            else 
            {
                load += arr[i];
            }
        }
        
        return true;
    }
    
    int leastWeightCapacity(int arr[], int n, int d) {
        int low = *max_element(arr, arr + n);  
        int high = accumulate(arr, arr + n, 0); 
        int ans = high;
        
        while (low <= high) 
        {
            int mid = low + (high - low) / 2;
            
            if (isPossible(arr, n, d, mid)) 
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
