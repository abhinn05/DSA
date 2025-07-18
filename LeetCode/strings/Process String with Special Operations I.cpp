class Solution {
public:
    string processStr(string s) {
        string final;
        int n = s.size();

        for(int i=0;i<n;++i)
        {
            if(isalpha(s[i]) && islower(s[i]))
            {
                final += s[i];
            }
            else if(s[i] == '*' && !final.empty())
            {
                final.pop_back();
            }
            else if(s[i]=='#')
            {
                string a = final;
                final += a;
            }
            else if(s[i] == '%')
            {
                reverse(final.begin(),final.end());
            }
        }
        return final;
    }
};