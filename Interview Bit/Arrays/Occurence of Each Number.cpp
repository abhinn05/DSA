vector<int> Solution::findOccurences(vector<int> &A) {
    vector<int> result;
    unordered_map<int, int> freq;

    for (int a : A) 
    {
        freq[a]++;
    }
    vector<pair<int, int>> vec(freq.begin(), freq.end());
    sort(vec.begin(), vec.end());
    
    for(auto a : vec)
    {
        result.push_back(a.second);
    }

    return result;
}
