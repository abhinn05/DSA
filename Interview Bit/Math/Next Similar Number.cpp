string Solution::solve(string A) {
    if (next_permutation(A.begin(), A.end())) return A;
    else return "-1";
}
        
