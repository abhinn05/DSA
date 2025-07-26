bool isPrime(int a) 
{
    if(a < 2) return false;
    for(int i = 2; i * i <= a; ++i) 
    {
        if(a % i == 0) return false;
    }
    return true;
}

vector<int> Solution::primesum(int A) {
    for(int i = 2; i <= A/2; ++i) 
    {
        if(isPrime(i) && isPrime(A - i)) 
        {
            return {i, A - i};
        }
    }
    return {}; 
}
