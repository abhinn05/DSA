int Solution::hammingDistance(const vector<int> &A) {
    long long total = 0;
    int n = A.size();
    int mod = 1e9 + 7;

    for (int i = 0; i < 32; ++i) 
    {
        int countSet = 0;

        for (int j = 0; j < n; ++j) 
        {
            if (A[j] & (1 << i)) countSet++;
        }

        long long countUnset = n - countSet;
        total = (total + (2LL * countSet * countUnset) % mod) % mod;
    }

    return total;
}
