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
};
int main()
{
    c1 p(3.5,2);
    p.get_sum();
    p.show();
    c1 q;
    q.get_sum();
    q.show();
    return 0;
}