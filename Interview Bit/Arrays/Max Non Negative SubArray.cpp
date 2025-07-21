vector<int> Solution::maxset(vector<int> &A) {
    vector<vector<int>> result;
    int n = A.size();
    int i = 0;
    while(i<n)
    {
        vector<int> a;
        while(i < n && A[i] >= 0)
        {
            a.push_back(A[i]);
            i++;
        }
        if (!a.empty()) result.push_back(a);
        i++;
    }
    long long maxSum = -1;
    int maxLen = -1;
    vector<int> answer;
    for (auto &sub : result) 
    {
        long long sum = 0;
        for (int x : sub) sum += x;
        if (sum > maxSum || (sum == maxSum && sub.size() > answer.size())) 
        {
            maxSum = sum;
            answer = sub;
        }
    }
    return answer;
}
