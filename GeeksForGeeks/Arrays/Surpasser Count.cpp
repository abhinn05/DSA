class Solution {
public:
    vector<int> findSurpasser(vector<int>& arr) {
        int n = arr.size();
        vector<int> result(n);
        vector<int> sortedSeen; 

        for (int i = n - 1; i >= 0; --i) 
        {
            auto it = upper_bound(sortedSeen.begin(), sortedSeen.end(), arr[i]);
            result[i] = sortedSeen.end() - it;
            sortedSeen.insert(it, arr[i]); 
        }

        return result;
    }
};
