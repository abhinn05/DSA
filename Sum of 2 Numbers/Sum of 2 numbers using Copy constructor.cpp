#include<iostream>
using namespace std;
class c1
{ 
    int x,y,sum;
    public:
    c1 ()
    {
        cout<<"Enter First number ";
        cin>>x;
        cout<<"Enter Second number ";
        cin>>y;
    }
    c1(int a,int b)
    {
        x=a;
        y=b;
    }
    void get_sum()
    {
        sum=x+y;
    }
    void show()
    {
        cout<<"Sum = "<<sum<<endl;
    }
    c1(c1 &p)
    {
        x=p.x;
        y=p.y;
        sum=p.sum;
    }
};
int main()
{
    c1 p;
    p.get_sum();
    p.show();
    c1 q(p);
    return 0;
}