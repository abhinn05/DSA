vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> result;
    if(A == 0) return result;
    result.push_back({1});
    if(A == 1) return result;
    result.push_back({1,1});
    
    for(int i=2;i<A;++i)
    {
        vector<int> lvl = result[i-1];
        vector<int> okay;
        okay.push_back(1);
        for(int i=0;i<lvl.size()-1;++i)
        {
            int num = lvl[i] + lvl[i+1];
            okay.push_back(num);
        }
        okay.push_back(1);
        result.push_back(okay);
    }
    
    return result;
}
