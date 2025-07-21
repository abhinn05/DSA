string Solution::solve(int A) {
    vector<int> res;
    res.push_back(1); 
    
    for (int i = 2; i <= A; i++) 
    {
        int carry = 0;
        for (int j = 0; j < res.size(); j++) 
        {
            int val = res[j] * i + carry;
            res[j] = val % 10;
            carry = val / 10;
        }

        while (carry) 
        {
            res.push_back(carry % 10);
            carry /= 10;
        }
    }

    string result;
    for (int i = res.size() - 1; i >= 0; i--)
        result += (res[i] + '0');

    return result;
}
