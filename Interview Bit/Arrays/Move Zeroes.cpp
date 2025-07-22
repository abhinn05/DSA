vector<int> Solution::solve(vector<int> &A) {
    int n = A.size();
    
    int i = 0;
    int count = 0;
    while(i < A.size())
    {
        if(A[i] == 0)
        {
            auto it = A.begin() + i;
            if(it != A.end()) A.erase(it);
            
            count++;
        }
        else i++;
    }
    for(int i=0;i<count;++i) A.push_back(0);
    return A;
}
