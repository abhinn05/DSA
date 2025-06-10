class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = *min_element(nums.begin(),nums.end());
        return n;
    }
};