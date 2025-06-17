#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        vector<int> x;
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            x.push_back(val);
        }
        
        sort(x.begin(),x.end());

        int a = min(abs(s-x[0]),abs(s-x[n-1]));
        int ans = 0;

        ans = a + (abs(x[0]-x[n-1]));

        cout<<ans<<endl;
    }
    return 0;
}