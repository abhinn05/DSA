vector<int> Solution::solve(vector<int> &A) {
    vector<int> result;
    for(int a : A)
    {
        result.push_back(a*a);
    }
    sort(result.begin(),result.end());
    return result;
}
