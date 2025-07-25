int Solution::isPrime(int A) {
    int upper = A/2;
    if(A==1) return 0;
    for(int i=2;i<=upper;++i)
    {
        if(i<A && A%i==0) return 0;
    }
    return 1;
}
