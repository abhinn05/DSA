class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n = s.size();
        int m = p.size();

        vector<int> freqp(26,0);
        vector<int> window(26,0);

        if(n<m) return ans;

        for(int i=0;i<m;i++)
        {
            freqp[p[i] - 'a']++;
            window[s[i] - 'a']++;
        }
        
        if(freqp == window) ans.push_back(0);

        for(int i=m;i<n;i++)
        {
            window[s[i-m] - 'a']--;
            window[s[i] - 'a']++;

            if(freqp == window) ans.push_back(i-m+1);
        }
        
        return ans;
    }
};