class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;

        unordered_map<char,char> s_to_t;
        unordered_map<char,char> t_to_s;

        for(int i=0;i<s.length();i++)
        {
            char s_char = s[i];
            char t_char = t[i];

            if(s_to_t.count(s_char))
            {
                if(s_to_t[s_char] != t_char) return false;
            }
            else
            {
                s_to_t[s_char] = t_char;
            }

            if(t_to_s.count(t_char))
            {
                if(t_to_s[t_char] != s_char) return false;
            }
            else
            {
                t_to_s[t_char] = s_char;
            }
        }
        return true;
    }
};