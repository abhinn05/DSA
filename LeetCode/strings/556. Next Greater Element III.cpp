class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        int m = s.size();

        int i = m-2;
        while(i>=0 && s[i+1]<=s[i])
        {
            i--;
        }
        if(i>=0)
        {
            int j = m - 1;
            while(s[j]<=s[i])
            {
                j--;
            }
            swap(s[i],s[j]);
            reverse(s.begin()+i+1,s.end());
        }
        else return -1;
        
        long long k = stoll(s);
        if(k>INT_MAX) return -1;
        return k;
    }
};