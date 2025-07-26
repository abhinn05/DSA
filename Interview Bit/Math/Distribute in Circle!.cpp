int Solution::solve(int A, int B, int C) {
    int pos = (C + A - 1) % B;
    if (pos == 0) return B;
    return pos;
}
