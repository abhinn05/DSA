#include <bits/stdc++.h>
using namespace std;

#define all(a) (a).begin(), (a).end()
#define endl "\n"
#define vec vector
#define pb push_back
#define yes cout << "YES\n";
#define no cout << "NO\n";

typedef int64_t ll;

int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;
    while(T--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> h(n);
        for(int &x: h) cin>>x;
        
        int hk = h[k-1];
        int Hmax = *max_element(all(h));

        if(hk == Hmax)
        {
            yes
            continue;
        }
        vec<int> v = h;
        sort(all(v));
        v.erase(unique(all(v)), v.end());
        int pos = lower_bound(all(v), hk) - v.begin();
        bool ok = true;
        for(int i = pos; i+1 < (int)v.size(); ++i)
        {
            if(v[i+1] - v[i] > hk)
            {
                ok=false;
                break;
            }
        }
        if(ok) yes
        else no
    }
}