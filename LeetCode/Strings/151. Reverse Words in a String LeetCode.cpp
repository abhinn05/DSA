class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string result;
        string ans;

        for(char ch : s)
        {
            if(ch != ' ')
            {
                ans += ch;
            }
            else if(!ans.empty())
            {
                reverse(ans.begin(),ans.end());
                if(!result.empty())
                {
                    result += ' ';
                }
                result += ans;
                ans.clear();
            }
        }
        if (!ans.empty()) 
        {
            reverse(ans.begin(), ans.end());
            if (!result.empty()) 
            {
                result += ' ';
            }
            result += ans;
        }
        return result;
        
    }
};