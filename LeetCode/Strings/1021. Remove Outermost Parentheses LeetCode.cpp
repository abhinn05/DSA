class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int count = 0;

        for(char ch : s)
        {
            if(ch == '(')
            {
                if(count > 0)
                {
                    result += ch;
                }
                count++;
            }
            else
            {
                count--;
                if(count>0)
                {
                    result += ch;
                }
            }
        }
        return result;
    }
};