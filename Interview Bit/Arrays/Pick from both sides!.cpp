int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int sum = 0;
    for(int i=0;i<B;++i) sum += A[i];
    
    int maxi = sum;
    
    for(int i=1;i<=B;++i)
    {
        sum -= A[B-i];
        sum+= A[n-i];
        maxi = max(sum,maxi);
    }
    return maxi;
}
