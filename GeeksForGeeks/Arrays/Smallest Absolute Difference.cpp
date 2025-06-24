int kthDiff(int a[], int n, int k) {
    vector<int> result;
    for(int i=0;i<n-1;i++)
    {
        int j = i + 1;
        while(j<n)
        {
            result.push_back(abs(a[i] - a[j]));
            j++;
        }
    }
    sort(result.begin(),result.end());
    
    return result[k-1];
}