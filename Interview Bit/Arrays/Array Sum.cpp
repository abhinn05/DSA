vector<int> Solution::addArrays(vector<int> &A, vector<int> &B) {
    vector<int> result;
    int i = A.size() - 1;
    int j = B.size() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) 
    {
        int sum = carry;

        if (i >= 0) sum += A[i--];
        if (j >= 0) sum += B[j--];

        result.push_back(sum % 10);
        carry = sum / 10;
    }

    reverse(result.begin(), result.end());
    return result;
}
