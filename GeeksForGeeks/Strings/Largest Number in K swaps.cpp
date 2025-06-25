class Solution {
  public:
    // Function to find the largest number after k swaps.
    string findMaximumNum(string& s, int k) {
        // code here.
        if(k==0) return s;
        
        int n = s.size();
        string ans = s;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(s[i] < s[j])
                {
                    swap(s[i],s[j]);
                    ans = max(ans,findMaximumNum(s,k-1));
                    
                    swap(s[i],s[j]);
                }
            }
        }
        return ans;
    }
};