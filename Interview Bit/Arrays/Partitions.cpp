int Solution::solve(int A, vector<int> &B) {
    long long total = 0;
    for(int i=0;i<A;++i) total += B[i];
    
    if(total % 3 != 0) return 0;
    
    long long target = total / 3;
    long long prefix = 0;
    long long count = 0;
    long long ways = 0;
    
    for(int i=0;i<A-1;++i)
    {
        prefix += B[i];
        
        if(prefix == 2*target) ways += count;
        
        if(prefix == target) count++;
    }
    
    return ways;
}
