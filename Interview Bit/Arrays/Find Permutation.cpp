vector<int> Solution::findPerm(const string A, int B) {
    vector<int> result;
    int low = 1;
    int high = B;
    
    for(char c : A)
    {
        if(c == 'I') result.push_back(low++);
        else result.push_back(high--);
    }
    result.push_back(low);
    return result;
}
