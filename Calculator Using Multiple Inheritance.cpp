#include<bits/stdc++.h>
using namespace std;
class c1
{
    protected:
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
};
class c2
{
    protected:
    int a,b,c;
    public:
    void input()
    {
        cout<<"Enter a ";
        cin>>a;
        cout<<"Enter b ";
        cin>>b;
    }
     void sub()
    {
        c=a-b;
    }
    void showw()
    {
        cout<<"Sub = "<<c<<endl;
    }
};
class c3 : public c1, public c2
{
    public:
    void mul()
    {
        z=x*y;
    }
    void div()
    {
        c=a/b;
    }
    void showww()
    {
        cout<<"Product = "<<z<<endl;
        cout<<"Div = "<<c;
    }
};
int main()
{
    c3 p;
    p.get_input();
    p.input();
    p.sum();
    p.show();
    p.sub();
    p.showw();
    p.mul();
    p.div();
    p.showww();
    return 0;
}