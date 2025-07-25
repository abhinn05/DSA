int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();
    if(n<2) return
    vector<int> b = A;
    sort(b.begin(),b.end());
    int result = 0;
    for(int i=0;i<n-1;++i)
    {
        int diff = abs(b[i] - b[i+1]);
        result = max(result,diff);
    }
    
    return result;
}
