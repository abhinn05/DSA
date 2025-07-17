#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,j,k;
        cin>>n>>j>>k;
        vector<int> a(n);
        for(int i=0;i<n;++i) cin>>a[i];
        
        if(k == 1 && a[j-1] != *max_element(a.begin(),a.end())) cout<<"No\n";
        else cout<<"Yes\n";
    }
}