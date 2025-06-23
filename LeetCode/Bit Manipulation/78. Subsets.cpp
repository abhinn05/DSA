class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> arr;
        arr.push_back({});
        for(int num : nums)
        {
            vector<vector<int>> newSub;
            for(vector<int> curr : arr)
            {
                vector<int> temp = curr;
                temp.push_back(num);
                newSub.push_back(temp);
            }
            for(vector<int> curr : newSub)
            {
                arr.push_back(curr);
            }
        }
        return arr;
    }
};