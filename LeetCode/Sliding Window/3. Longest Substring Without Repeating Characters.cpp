class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> index;
        int n = s.size();
        int left = 0;
        int right = 0;
        int result = 0;
        while(right<n)
        {
            char c = s[right];

            if(index.find(c) != index.end())
            {
                left = max(left,index[c]+1);
            }
            int win = right - left + 1;
            result = max(result,win);

            index[c] = right;
            right++;
        }
        return result;
    }
};