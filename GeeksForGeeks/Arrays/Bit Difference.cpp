class Solution {
  public:
    int countBits(int N, long long int A[]) {
        const int MOD = 1e9 + 7;
        long long sum = 0;
        
        for(int i = 0; i < 32; i++) 
        {
            long long countOn = 0;
            for(int j = 0; j < N; j++) 
            {
                if (A[j] & (1LL << i)) countOn++;
            }
            long long countOff = N - countOn;
            sum = (sum + (countOn * countOff * 2) % MOD) % MOD;
        }
        return sum;
    }
};
