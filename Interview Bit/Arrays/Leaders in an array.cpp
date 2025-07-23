bool higher(vector<int>& a, int start, int end)
{
    int element = a[start];
    start++;
    while(start<=end)
    {
        if(element < a[start]) return false;
        start++;
    }
    return true;
}

vector<int> Solution::solve(vector<int> &A) {
    vector<int> result;
    int n = A.size();
    
    for(int i=0;i<n;++i)
    {
        if(higher(A,i,n-1)) result.push_back(A[i]);
    }
    return result;
}
