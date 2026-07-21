class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.size();
        int prev = 0, curr = 0;
        int total = 0;
        int best = 0;
        int i = 0;

        while(i < n)
        {
            if(s[i] == '0') 
            {
                prev++;
                i++;
            }
            else
            {
                while(i < n && s[i] == '1')
                {
                    total++;
                    i++;
                }
                while(i < n && s[i] == '0')
                {
                    curr++;
                    i++;
                }
                if(prev && curr)
                {
                    best = max(best,prev+curr);
                }

                prev = curr;
                curr = 0;
            }
        }
        return total + best;
    }
};