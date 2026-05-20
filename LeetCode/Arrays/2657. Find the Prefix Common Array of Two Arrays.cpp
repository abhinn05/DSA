class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> c(n,0);

        for(int i=0;i<n;++i)
        {
            vector<int> d(n+1,0);
            int j = 0;
            while(j<=i)
            {
                d[A[j]]++;
                d[B[j]]++;
                j++;
            }
            for(int k=0;k<=n;++k)
            {
                if(d[k] == 2) c[i]++;
            }
        }
        return c;
    }
};