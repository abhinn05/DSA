#include<bits/stdc++.h>
using namespace std;
class c1
{
    int x,y,z;
    public:
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
    c1 operator+(c1 k)
    {
        c1 p;
        p.x=x+k.x;
        p.y=y+k.y;
        p.z=z+k.z;
        return p;
    }
};
int main()
{
    c1 p;
    p.get_input();
    p.sum();
    p.show();
    c1 q;
    c1 r;
    q.get_input();
    q.sum();
    r=p+q;
    r.show();
    return 0;
}