int Solution::isPower(int A) {
    if (A == 1) return 1;

    for (int P = 2; P <= log2(A); ++P) 
    {
        double root = pow(A, 1.0 / P);
        long long base = round(root);

        long long power = 1;
        for (int i = 0; i < P; ++i) 
        {
            power *= base;
            if (power > A) break;
        }

        if (power == A) return 1;
    }

    return 0;
}
