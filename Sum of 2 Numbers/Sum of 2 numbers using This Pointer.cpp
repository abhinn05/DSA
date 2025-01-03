#include<iostream>
using namespace std;
class c1
{
    int x,y,z;
    public:
    void set_data(int x, int y)
    {
        this->x=x;
        this->y=y;
    }
    int sum(int z)
    {
        this->z=x+y+z;
        return this->z;
    }
};
int main()
{
    c1 p;
    p.set_data(5,8);
    int x=p.sum(9);
    cout<<"Sum = "<<x;
}