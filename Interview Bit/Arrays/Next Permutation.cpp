vector<int> Solution::nextPermutation(vector<int> &A) {
    next_permutation(A.begin(),A.end());
    vector<int> b = A;
    return b;
}
