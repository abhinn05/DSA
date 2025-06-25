class Solution {
  public:
    string uncommonChars(string& s1, string& s2) {
        // code here
        int n = s1.size();
        int m = s2.size();
        string a = s1;
        string b = s2;
        
        for(int i=0;i<m;i++)
        {
            char rem = b[i];
            a.erase(remove(a.begin(),a.end(),rem),a.end());
        }
        
        for(int i=0;i<n;i++)
        {
            char rem = s1[i];
            b.erase(remove(b.begin(),b.end(),rem),b.end());
        }
        
        string c = a+b;
        sort(c.begin(),c.end());
        string d = "";
        
        int u = c.size();
        for(int i = 0; i < c.size(); i++) 
        {
            if(i == 0 || c[i] != c[i - 1]) d += c[i];
        }
            
        return d;
    }
};
