#include<iostream>
using namespace std;
class c1
{
    int a,b,c;
    public:
    void get_input()
    {
        cout<<"Enter 1st Number ";
        cin>>a;
        cout<<"Enter 2nd Number ";
        cin>>b;
    }
    void sum()
    {
        c=a+b;
        cout<<"Sum = "<<c<<endl;
    }
};
class c2 : public c1
{
    int x,y,z;
    public:
    void get_data()
    {
        cout<<"Enter 1st Number ";
        cin>>x;
        cout<<"Enter 2nd Number ";
        cin>>y;
    }
    void sub()
    {
        z=x-y;
        cout<<"Sub = "<<z<<endl;
    }
};
int main()
{
    c2 p;
    p.get_data();
    p.sub();
    p.get_input();
    p.sum();
    return 0;
}