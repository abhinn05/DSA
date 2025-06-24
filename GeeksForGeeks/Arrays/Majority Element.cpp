class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        unordered_map<int,int> map;
        for(int n : arr)
        {
            map[n]++;
        }
        int n = arr.size();
        for(auto& i : map)
        {
            if(i.second > n/2)
            {
                return i.first;
            }
        }
        return -1;
    }
};