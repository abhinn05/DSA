#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    
    void Insertion(vector<int>& arr , int k)
    {
        arr.push_back(k);
    }

    void deletion(vector<int>& arr , int m)
    {
        auto it = find(arr.begin(),arr.end(),m);
        if(it != arr.end())
        {
            arr.erase(it);
        }
    }

    void traversal(vector<int> arr)
    {
        cout<<"Array Traversal : ";
        for(int i=0;i<arr.size();i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    vector<int> arr = {3,5,1,7,4,8};
    Solution p;
    cout<<"Original Array : ";
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    p.Insertion(arr,34);
    cout<<"After Insertion Array : ";
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }


    cout<<endl;
    p.deletion(arr,5);
    cout<<"After Deletion Array : ";
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    p.traversal(arr);

}