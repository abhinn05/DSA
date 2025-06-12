class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> a;
        vector<string> ans;

        int n = s.size();
        if(n<10) return ans;

        for(int i=0;i<n-9;i++)
        {
            a[s.substr(i,10)]++;
        }

        for(auto c : a)
        {
            if(c.second > 1)
            {
                ans.push_back(c.first);
            }
        }
        return ans;
    }
};