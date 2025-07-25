vector<int> Solution::sieve(int A) 
{
    vector<bool> isPrime(A + 1, true);
    isPrime[0] = isPrime[1] = false;
    
    for(int i = 2; i * i <= A; ++i) 
    {
        if(isPrime[i]) 
        {
            for(int j = i * i; j <= A; j += i) 
            {
                isPrime[j] = false;
            }
        }
    }

    vector<int> result;
    for(int i = 2; i <= A; ++i) 
    {
        if(isPrime[i]) result.push_back(i);
    }
    return result;
}
