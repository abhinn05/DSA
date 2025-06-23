class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1.0;
        long N = n; 
        if (N < 0) 
        {
            N = -N;
            x = 1.0 / x;
        }
        if (N % 2 == 0) return myPow(x * x, N / 2);
        else return x * myPow(x, N - 1);
    }
};