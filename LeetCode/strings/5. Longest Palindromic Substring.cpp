class Solution {
public:
    string expand(int i, int j, string s)
    {
        int left = i;
        int right = j;

        while(left >= 0 && right < s.size() && s[left] == s[right])
        {
            left--;
            right++;
        }
        return s.substr(left+1,right-left-1);
    }
    string longestPalindrome(string s) {
        string result = "";

        for(int i=0;i<s.size();i++)
        {
            string odd = expand(i,i,s);
            if(odd.size() > result.size()) result = odd;

            string even = expand(i,i+1,s);
            if(even.size() > result.size()) result = even;
        }
        return result;
    }
};