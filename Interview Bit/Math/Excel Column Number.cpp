int Solution::titleToNumber(string A) {
    int result = 0;
    for (int i = 0; i < A.length(); ++i) {
        result = result * 26 + (A[i] - 'A' + 1);
    }
    return result;
}
