#include<iostream>
using namespace std;
int fact=1;
void factorial(int n);
int main()
{
    int n;
    cout<<"Enter Number ";
    cin>>n;
    factorial(n);
    cout<<"Factorial of "<<n<<" = "<<fact;
}
void factorial(int n)
{
    if(n>=1)
    {
        fact=fact*n;
        n--;
        factorial(n);
    }
}