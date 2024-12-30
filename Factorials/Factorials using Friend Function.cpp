#include<iostream>
using namespace std;
class factorial
{
    int n,fact;
    public:
    void get_input()
    {
        cout<<"Enter Number ";
        cin>>n;
    }
    friend void calculate(factorial f);
};
void calculate(factorial f)
{
    f.fact=1;
    for(int i=1;i<=f.n;i++)
    {
        f.fact=f.fact*i;
    }
    cout<<"Factorial of "<<f.n<<" = "<<f.fact;
}
int main()
{
    factorial p;
    p.get_input();
    calculate(p);
    return 0;
}