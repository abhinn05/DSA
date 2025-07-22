int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    int n = A.size();
    
    for(int i=0;i<n;++i)
    {
        if (i < n - 1 && A[i] == A[i + 1]) continue;
        int diff = n - 1 - i;
        int p = A[i];
        if(p == diff) return 1;
    }
    
    return -1;
}
