class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;

        for(char c : s)
        {
            freq[c]++;
        }
        vector<pair<char,int>> freq_vec(freq.begin(),freq.end());

        sort(freq_vec.begin(), freq_vec.end(), [](const auto& a, const auto& b) 
        {
            return a.second > b.second;
        });
        string result;
        for(const auto& pair : freq_vec)
        {
            result.append(pair.second,pair.first);
        }
        return result;

    }
};