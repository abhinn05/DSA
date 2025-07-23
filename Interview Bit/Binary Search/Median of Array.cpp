double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    int N1 = A.size();
    int N2 = B.size();
    if (N1 < N2) return findMedianSortedArrays(B, A);   
    if (N2 == 0) return (A[(N1-1)/2] + (double)A[N1/2])/2.0;

    int lo = 0, hi = N2 * 2,mid1,mid2;
    double L1,L2,R1,R2;
    while (lo <= hi) 
    {
         mid2 = (lo + hi) / 2;  
         mid1 = N1 + N2 - mid2; 

         L1 = (mid1 == 0) ? -1000000000 : A[(mid1-1)/2]; 
         L2 = (mid2 == 0) ? -1000000000 : B[(mid2-1)/2];
         R1 = (mid1 == N1 * 2) ? 1000000000 : A[(mid1)/2];
         R2 = (mid2 == N2 * 2) ? 1000000000 : B[(mid2)/2];

        if (L1 > R2) lo = mid2 + 1;    
        else if (L2 > R1) hi = mid2 - 1;    
        else return (max(L1,L2) + min(R1, R2)) / 2;
    }
    return -1;
}
