#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x;
        cin>>x;
        vector<int> arr;

        while(x>0)
        {
            int digit;
            digit = x%10;
            x = x/10;

            arr.push_back(digit);
        }
        sort(arr.begin(),arr.end());
        cout<<arr[0]<<endl;
    }
}