class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int n : nums)
        {
            map[n]++;
        }
        for(auto a : map)
        {
            if(a.second == 1) return a.first;
        }
        return -1;
    }
};