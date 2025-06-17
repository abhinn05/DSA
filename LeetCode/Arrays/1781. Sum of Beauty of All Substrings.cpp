class Solution {
public:
    int beautySum(string s) {
        int total = 0;
        for(int i = 0; i < s.size(); ++i) 
        {
            unordered_map<char, int> freq;
            for(int j = i; j < s.size(); ++j) 
            {
                freq[s[j]]++;  

                int maxFreq = 0, minFreq = INT_MAX;
                for(auto& [ch, count] : freq) 
                {
                    maxFreq = max(maxFreq, count);
                    minFreq = min(minFreq, count);
                }

                total += (maxFreq - minFreq);  
            }
        }
        return total;
    }
};
