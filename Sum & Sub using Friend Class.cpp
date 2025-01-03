#include<iostream>
using namespace std;
class c1
{
    int x,y,z;
    public:
    friend class c2;
    void get_input()
    {
        cout<<"Enter 1st Number ";
        cin>>x;
        cout<<"Enter 2nd Number ";
        cin>>y;
    }
   void sum()
   {
    z=x+y;
   }
   void show()
   {
    cout<<"Sum = "<<z;
   }
};
class c2
{
    public:
    void sub()
    {
        c1 k;
        k.get_input();
        k.z=k.y-k.x;
        cout<<"Sub = "<<k.z<<endl;
        k.sum();
        k.show();
    }
};
int main()
{
    c2 p;
    p.sub();
    return 0;
}