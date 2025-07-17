#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);

        for(int i=0;i<n;++i) cin>>a[i];

        map<int,int> map;
        int mn = INT_MAX;
        for(int i=0;i<n;++i)
        {
            if(a[i] < mn)
            {
                mn = a[i];
                map[a[i]] = 1;
            }
        }
        int mx = INT_MIN;
        for(int i=n-1;i>=0;--i)
        {
            if(a[i] > mx)
            {
                mx = a[i];
                map[a[i]] = 1;
            }
        }

        for(auto x : a) cout<<map[x];
        cout<<endl;
    }
}