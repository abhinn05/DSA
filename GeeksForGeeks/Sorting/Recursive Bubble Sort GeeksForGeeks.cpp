class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n-1;i++)
            {
                int j = i+1;
                if(arr[i]>arr[j])
                {
                    swap(arr[i],arr[j]);
                }
            }
            
        }
    }
};