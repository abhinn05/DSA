#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:

    void merge(vector<int>& a , vector<int>& b)
    {
        for(int i=0;i<b.size();i++)
        {
            a.push_back(b[i]);
        }
    }
};

int main()
{
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {6,7,8,9,10};
    
    cout<<"Array 1 : ";
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<"Array 2 : ";

    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;

    Solution p;
    p.merge(a,b);
    cout<<"Merged Array : ";

    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }

}