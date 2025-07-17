#include <bits/stdc++.h>
using namespace std;

#define all(a) (a).begin(), (a).end()
#define endl "\n"
#define vec vector
#define pii pair<int, int>
#define se second
#define fi first
#define pb push_back
#define maxel(v) *max_element(v.begin(), v.end())
#define minel(v) *min_element(v.begin(), v.end())
#define yes cout << "YES\n";
#define m1 cout << "-1\n";
#define no cout << "NO\n";

typedef int64_t ll;
typedef unsigned long long ull;
typedef long double ld;
const ll mod = 1e9 + 7;
const ll mod2 = 1e9 + 9;
const ll mod3 = 998244353;
const double pi = 3.141592653589793238;
const ld EPS = 1e-9;
const int MAXN = 1e5 * 5;
const int LOGN = __lg(MAXN) + 1;

template<typename T>
void printa(const vec<T> a)
{
    for(auto& p: a) cout << p << " ";
    cout << endl;
}

template<typename T1, typename T2>
istream& operator>>(istream& in, pair<T1, T2>& p)
{
    in>>p.fi>>p.se;
    return in;
}
template<typename T>
istream& operator>>(istream& in, vec<T>& v)
{
    for(auto& e: v) in>>e;
    return in;
}
template<typename T>
void print2d(const vec<vec<T>>& vv)
{
    for(auto& row: vv)
    {
        for(auto& x: row) cout << x << " ";
        cout << endl;
    }
}

int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t -- )
    {
        int n;
        cin>>n;
        vec<ll> p(n), s(n);
        for(int i=0;i<n;i++) cin>>p[i];
        for(int i=0;i<n;i++) cin>>s[i];

        ll g = p[n-1];
        bool ok = true;
        if(s[0] != g) ok = false;
        for(int i=1;i<n; i++)
        {
            if(p[i-1]% p[i] != 0) ok = false;
        }

        for(int i=0;i+1<n;i++)
        {
            if(s[i+1]% s[i] != 0) ok = false;
        }

        for(int i=0;i<n;i++)
        {
            if(__gcd(p[i], s[i]) != g) ok = false;
        }

        for(int i=0;i+1<n;i++)
        {
            if(__gcd(p[i], s[i+1]) != g) ok = false;
        }
        if(ok) yes
        else no
    }
}