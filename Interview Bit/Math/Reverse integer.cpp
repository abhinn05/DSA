int Solution::reverse(int A) {
    int reverse = 0;
    int sign = A < 0 ? -1 : 1;
    A = abs(A);

    while (A > 0) 
    {
        int digit = A % 10;
        if (reverse > (INT_MAX - digit) / 10) return 0;
        reverse = reverse * 10 + digit;
        A /= 10;
    }

    return reverse * sign;
}
