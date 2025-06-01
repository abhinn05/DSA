#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public: 
    int a,b,c;
    
    bool isequal(int a, int b, int c)
    {
        int total = a + b + c;

        if(total % 3 != 0)
        {
            return false;
        }

        int target = total / 3;

        return (target >= a && target >= b && target <= c);
    }
};

int main()
{
    Solution p;
    vector<string> arr;
    int a,b,c,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if(a < b && b < c && p.isequal(a,b,c))
        {
            arr.push_back("YES");
        }
        else
        {
            arr.push_back("NO");
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    
}