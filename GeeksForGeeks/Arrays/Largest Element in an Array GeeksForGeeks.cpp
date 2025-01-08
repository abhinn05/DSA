class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int key = 0;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]>key)
            {
                key = arr[i];
            }
        }
        return key;
    }
};