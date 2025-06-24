// User function Template for C++

class Solution {
  public:
    int getSingle(vector<int> &arr) {
        // code here
        unordered_map<int,int> map;
        for(auto& num : arr)
        {
            map[num]++;
        }
        
        for(auto& pair : map)
        {
            if(pair.second == 1) return pair.first; 
        }
        return -1;
    }
};