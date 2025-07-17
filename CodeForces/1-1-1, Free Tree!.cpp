#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define vec vector
#define pb push_back
#define INF LLONG_MAX
#define pii pair<int, int>

const int HEAVY_THRESH = 500;

void solve() 
{
    int n, q;
    cin >> n >> q;

    vec<int> color(n + 1);
    for (int i = 1; i <= n; i++) 
    {
        cin >> color[i];
    }

    vec<vec<pii>> adj(n + 1);
    int u, v, c;
    int64_t total_edge_sum = 0;

    for (int i = 0; i < n - 1; i++) 
    {
        cin >> u >> v >> c;
        adj[u].pb({v, c});
        adj[v].pb({u, c});
        total_edge_sum += c;
    }

    vec<bool> isHeavy(n + 1, false);
    for (int i = 1; i <= n; i++) 
    {
        if ((int)adj[i].size() > HEAVY_THRESH) 
        {
            isHeavy[i] = true;
        }
    }

    vector<unordered_map<int, int64_t>> heavyMap(n + 1);
    for (int i = 1; i <= n; i++) 
    {
        if (isHeavy[i]) 
        {
            auto &mp = heavyMap[i];
            mp.reserve(adj[i].size() * 2);
            for (auto &e : adj[i]) 
            {
                int to = e.first, w = e.second;
                mp[color[to]] += w;
            }
        }
    }

    vec<vec<pii>> heavyNbrs(n + 1);
    for (int i = 1; i <= n; i++) 
    {
        for (auto &e : adj[i]) 
        {
            int to = e.first, w = e.second;
            if (isHeavy[to]) 
            {
                heavyNbrs[i].pb({to, w});
            }
        }
    }

    int64_t same_color_sum = 0;
    for (int i = 1; i <= n; i++) 
    {
        for (auto &e : adj[i]) 
        {
            int to = e.first, w = e.second;
            if (to > i && color[to] == color[i]) 
            {
                same_color_sum += w;
            }
        }
    }

    while (q--) 
    {
        int x, newCol;
        cin >> x >> newCol;
        int oldCol = color[x];
        if (oldCol != newCol) 
        {
            int64_t sum_old = 0, sum_new = 0;

            if (isHeavy[x]) 
            {
                auto &mp = heavyMap[x];
                if (mp.count(oldCol)) sum_old = mp[oldCol];
                if (mp.count(newCol)) sum_new = mp[newCol];
            } 
            else 
            {
                for (auto &e : adj[x]) 
                {
                    int to = e.first, w = e.second;
                    if (color[to] == oldCol) sum_old += w;
                    if (color[to] == newCol) sum_new += w;
                }
            }

            same_color_sum += -sum_old + sum_new;

            for (auto &hn : heavyNbrs[x]) 
            {
                int H = hn.first, w = hn.second;
                auto &mp = heavyMap[H];
                mp[oldCol] -= w;
                mp[newCol] += w;
            }

            color[x] = newCol;
        }

        cout << (total_edge_sum - same_color_sum) << "\n";
    }
}

signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }

    return 0;
}
