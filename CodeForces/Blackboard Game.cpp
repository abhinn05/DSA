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
        if (n % 4 == 0) cout << "Bob\n";
        else cout << "Alice\n";
    }
}