int Solution::solve(vector<int> &A, int B) {
    unordered_set<int> possible_values;
    possible_values.insert(A[0]);
    possible_values.insert(A[0] + B);
    possible_values.insert(A[0] - B);
    
    for (int i = 1; i < A.size(); ++i) 
    {
        unordered_set<int> current;
        current.insert(A[i]);
        current.insert(A[i] + B);
        current.insert(A[i] - B);

        unordered_set<int> new_possible;
        for (int val : possible_values) 
        {
            if (current.count(val)) new_possible.insert(val);
        }

        if (new_possible.empty()) return 0;
        possible_values = new_possible;
    }

    return 1;
}
