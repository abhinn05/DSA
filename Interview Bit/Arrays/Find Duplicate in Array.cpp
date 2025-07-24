int Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    vector<int> b=A;
    sort(b.begin(),b.end());
    for(int i=0;i<n-1;++i)
    {
        if(b[i] == b[i+1]) return b[i];
    }
    return -1;
}
