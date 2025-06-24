// User function Template for C++

class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int> map;
        map[0] = 1;
        
        int count = 0;
        int current = 0;
        
        for(int num : arr)
        {
            current += num;
            
            if(map.find(current - k) != map.end())
            {
                count += map[current - k];
            }
            map[current]++;
        }
        return count;
    }
};