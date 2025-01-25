class Solution {
public:
    const int MOD = 1e9 + 7;
    
    long long modExp(long long base , long long exp , int mod)
    {
        if(exp==0) return 1;
        long long half = modExp(base,exp/2,mod);
        half = (half * half) % mod;
        if(exp % 2 != 0)
        {
            half = (half * base) % mod;
        }
        return half;
    }
    int countGoodNumbers(long long n) {
        long long odd = (n+1)/2;
        long long even = n/2;

        long long evenPart = modExp(4 , even , MOD);
        long long oddPart = modExp(5 , odd , MOD);

        return (evenPart * oddPart) % MOD;
    }
};