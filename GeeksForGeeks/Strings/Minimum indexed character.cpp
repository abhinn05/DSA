class Solution {
  public:
    string printMinIndexChar(string S, string patt) {
        // Code here
        int n = patt.size();
        int m = S.size();
        string ans = "";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(S[i] == patt[j]) 
                {
                    ans += S[i];
                    return ans;
                }
            }
        }
        ans += "$";
        
        return ans;
    }
};