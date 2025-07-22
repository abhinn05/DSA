bool comp(const vector < int > & A, const vector < int > & B) 
{
    if (A[1] != B[1]) return A[1] < B[1];
        
    return A[0] < B[0];
}
int Solution::setIntersection(vector < vector < int > > & A) {
    int n = A.size();
    sort(A.begin(), A.end(), comp);
    vector < int > res;
    res.push_back(A[0][1] - 1);
    res.push_back(A[0][1]);
    for (int i = 1; i < n; i++) 
    {
        int start = A[i][0];
        int end = A[i][1];
        int size = res.size();
        int last = res[size - 1];
        int secondLast = res[size - 2];
        if (start > last) 
        {
            res.push_back(end - 1);
            res.push_back(end);
        } 
        else if (start == last) res.push_back(end);
        else if (start > secondLast) res.push_back(end);
    }
    return res.size();
}