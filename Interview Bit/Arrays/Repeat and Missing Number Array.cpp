vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    int xor_all = 0;

    for (int i = 0; i < n; i++) 
    {
        xor_all ^= A[i];
        xor_all ^= (i + 1);
    }

    int mask = xor_all & -xor_all;

    int x = 0, y = 0;

    for (int i = 0; i < n; i++) 
    {
        if (A[i] & mask) x ^= A[i];
            
        else y ^= A[i];

        if ((i + 1) & mask) x ^= (i + 1);
            
        else y ^= (i + 1);      
    }

    for (int a : A) 
    {
        if (a == x) return {x, y}; 
        if (a == y) return {y, x}; 
    }

    return {};
}
