class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int key = 0;
        int n = arr.size();
        for(int i=1;i<n;i++)
        {
            if(arr[i] != arr[0])
            {
                break;
            }
            else
            {
                return -1;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>key)
            {
                key = arr[i];
            }
        }
        
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] == key)
            {
                count++;
            }
        }

        for(int i=0;i<count;i++)
        {
            auto it = find(arr.begin(),arr.end(),key);
            
            if(it != arr.end())
            {
                arr.erase(it);
            }
        }
        
        int ans = 0;
        int m = arr.size();
        for(int i=0;i<m;i++)
        {
            if(arr[i]>ans)
            {
                ans = arr[i];
            }
        }
        return ans;
    }
};