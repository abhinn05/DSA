class Solution {
public:
    bool validPalindrome(string s) {
        int n = s.size();
        string p = s;
        int left = 0;
        int right = n - 1;
        while(left<right)
        {
            if(s[left] != s[right])
            {
                auto it = s.begin() + left;
                if(it != s.end())
                {
                    s.erase(it);
                }
                string h = s;
                reverse(h.begin(),h.end());
                if(h == s) return true;

                else
                {
                    auto m = p.begin() + right;
                    if(m != p.end())
                    {
                        p.erase(m);
                    }
                    string u = p;
                    reverse(u.begin(),u.end());
                    if(u == p) return true;
                    else return false;
                }
            }
            left++;
            right--;
        }
        return true;
    }
};