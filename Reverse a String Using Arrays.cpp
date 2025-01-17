#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:

    void reverse(string &s)
    {
        int n = s.size();
        for(int i=0;i<n/2;i++)
        {
            char temp = s[i];
            s[i] = s[n-i-1];
            s[n-i-1] = temp;
        }
    }
};

int main()
{
    string s = "Hello World";
    Solution p;

    cout<<"Original String : "<<s;
    
    cout<<endl;

    p.reverse(s);
    cout<<"Reversed String : "<<s;
    

}