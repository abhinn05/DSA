#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> doors(n);
        for (int i = 0; i < n; i++) cin >> doors[i];

        bool possible = true;
        int last_closed = -1;

        for (int i = 0; i < n; i++) 
        {
            if (doors[i] == 1) 
            {
                last_closed = i;
            }
        }

        int first_closed = 0;
        while (first_closed < n && doors[first_closed] != 1) 
        {
            first_closed++;
        }

        if (first_closed + x > last_closed) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}