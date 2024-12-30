#include<iostream>
using namespace std;
class factorial
{
    int n,fact;
    public:
    void calculate(int a)
    {
        n=a;
        fact=1;
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        cout<<"Factorial of "<<fact;
    }
};
int main()
{
    factorial p;
    cout<<"Enter Number ";
    int a;
    cin>>a;
    p.calculate(a);
    return 0;
}