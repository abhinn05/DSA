// User function Template for C++

class Solution {
  public:
    int closest3Sum(vector<int> &arr, int target) {
        // code here
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int closest = arr[0] + arr[1] + arr[2];
        
        for(int i=0;i<n-2;++i)
        {
            int left = i+1, right = n-1;
            while(left<right)
            {
                int current = arr[i] + arr[left] + arr[right];
                if(abs(current - target) < abs(closest - target) || abs(current - target) == abs(closest - target) && current > closest)
                {
                    closest = current;
                }
                if(current < target) ++left;
                else if(current > target) --right;
                else return current;
            }
        }
        return closest;
    }
};