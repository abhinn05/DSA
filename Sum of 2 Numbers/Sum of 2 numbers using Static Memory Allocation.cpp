#include<iostream>
using namespace std;
class c1
{
    int x,y,z;
    public:
    c1()
    {
        cout<<"In Constructor"<<endl;
    }
    ~c1()
    {
        cout<<"In Destructor"<<endl;
    }
    void get_data()
    {
       cout<<"Enter 1st Number ";
       cin>>x;
       cout<<"Enter 2nd Number ";
       cin>>y;
    }
    void get_sum()
    {
        z=x+y;
    }
    void show()
    {
        cout<<"Sum = "<<z<<endl;        
    }
};
int main()
{
    c1* p;
    cout<<"Dash\n";
    p=new(c1);
    p->get_data();
    p->get_sum();
    p->show();
    delete(p);
    cout<<"Dash";
    return 0;
}