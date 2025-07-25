int Solution::solve(vector<string> &A) {
    int n = A.size(), m = A[0].size();
    map<char, int> mxr[m], mnr[m], mxc, mnc;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            mxr[j][A[i][j]] = max(mxr[j][A[i][j]], i);
            if(mnr[j].count(A[i][j])) mnr[j][A[i][j]] = min(mnr[j][A[i][j]], i);
            else mnr[j][A[i][j]] = i;
                
            mxc[A[i][j]] = max(mxc[A[i][j]], j);

            if(mnc.count(A[i][j])) mnc[A[i][j]] = min(mnc[A[i][j]], j);    
            else mnc[A[i][j]] = j;
                
        }
    }
    int ans = 0;
    for(int i = 0; i < m; i++)
    {
        if(mxr[i].count('r') and mxr[i].count('g') and mxc.count('b'))
        {
            ans = max(ans, max(abs(mxr[i]['r'] - mnr[i]['g']) + 1, abs(mxr[i]['g'] - mnr[i]['r']) + 1) * max(abs(mxc['b'] - i) + 1, abs(i - mnc['b']) + 1));
        }
            
        if(mxr[i].count('g') and mxr[i].count('b') and mxc.count('r'))
        {
            ans = max(ans, max(abs(mxr[i]['g'] - mnr[i]['b']) + 1, abs(mxr[i]['b'] - mnr[i]['g']) + 1) * max(abs(mxc['r'] - i) + 1, abs(i - mnc['r']) + 1));
        }
        if(mxr[i].count('r') and mxr[i].count('b') and mxc.count('g'))
        {
            ans = max(ans, max(abs(mxr[i]['r'] - mnr[i]['b']) + 1, abs(mxr[i]['b'] - mnr[i]['r']) + 1) * max(abs(mxc['g'] - i) + 1, abs(i - mnc['g']) + 1));
        }
    }
    return (ans + 1)/2;
}