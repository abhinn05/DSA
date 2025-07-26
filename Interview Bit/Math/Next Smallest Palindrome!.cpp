string Solution::solve(string A) {
    int size = A.size();
    int mid = (size+1)/2;

    bool incr = true;
    for(int i = mid; i < size; i++) 
    {
        if(A[size-1-i] == A[i]) continue;
        if(A[size-1-i] < A[i]) incr = true;
        if(A[size-1-i] > A[i]) incr = false;
        break;
    }

    A = A.substr(0,mid);

    if(incr) 
    {
        int carry = 1;

        for(int i = mid-1; i >= 0 && carry == 1; i--)
            A[i] = ( A[i] == '9' ? '0' : A[i] + carry--);

        if(carry) return '1' + string(size-1,'0') + '1';
    }

    for(int i = size-A.size()-1; i >= 0; i--) A.push_back(A[i]);

    return A;
}
