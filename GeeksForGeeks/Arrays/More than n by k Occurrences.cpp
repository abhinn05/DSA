class Solution {
  public:
    // Function to find all elements in array that appear more than n/k times.
    int countOccurence(vector<int>& arr, int k) {
        // Your code here
        int n = arr.size();
        int res = n/k;
        unordered_map<int,int> map;
        int count = 0;
        
        for(int num : arr)
        {
            map[num]++;
        }
        
        for(auto& pair : map)
        {
            if(pair.second > res) count++;
        }
        return count;
    }
};