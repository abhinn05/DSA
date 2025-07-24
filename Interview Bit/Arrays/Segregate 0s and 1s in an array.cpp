vector<int> Solution::solve(vector<int> &A) {
    int count = 0;
    int count1 = 0;
    
    for(int i=0;i<A.size();++i)
    {
        if(A[i]==0) count++;
        else if(A[i]==1) count1++;
    }
    
    vector<int> B;
    for(int i=0;i<count;++i) B.push_back(0);
    for(int i=0;i<count1;++i) B.push_back(1);
    
    return B;
}
