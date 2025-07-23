int Solution::highestScore(vector<vector<string> > &A) {
    unordered_map<string, pair<int, int>> studentData;
    
    for (const auto& entry : A) 
    {
        string name = entry[0];
        int marks = stoi(entry[1]);
        studentData[name].first += marks;
        studentData[name].second += 1;
    }
    
    int maxAvg = INT_MIN;
    for (const auto& [name, data] : studentData) 
    {
        int total = data.first;
        int count = data.second;
        int avg = total / count; 
        maxAvg = max(maxAvg, avg);
    }
    
    return maxAvg;
}
