#include<bits/stdc++.h>
using namespace std;
class c1
{
    int x,y,z;
    public:
    c1()
    {
        x=1;
        y=1;
        z=1;
    }
    void get_input()
    {
        cout<<"Enter x ";
        cin>>x;
        cout<<"Enter y ";
        cin>>y;
    }
    void sum()
    {
        z=x+y;
    }
    void show()
    {
        cout<<"Sum = "<<z<<endl;
    }
    void operator++()
    {
        x++;
        y++;
        z++;
    }
};
int main()
{
    c1 p;
    p.get_input();
    p.sum();
    p.show();
    ++p;
    p.show();
    return 0;
}