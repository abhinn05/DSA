int Solution::divisibleBy60(vector<int> &A) {
    int sum = 0;
    int zero_count = 0;
    int even_count = 0;

    for (int digit : A) 
    {
        sum += digit;
        if (digit == 0) zero_count++;
        if (digit % 2 == 0) even_count++;
    }
    if(sum == 0) return 1;
    if (zero_count == 0) return 0;

    if (even_count < 2) return 0;

    if (sum % 3 != 0) return 0;

    return 1;
}
