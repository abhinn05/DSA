#include<iostream>
using namespace std;
class c1
{
   int x,y,sum;
   public:
   c1()
   {
    cout<<"Enter First Number ";
    cin>>x;
    cout<<"Enter Second Number ";
    cin>>y;
   }
   int get_sum()
   {
    sum=x+y;
    return sum;
   }
};
int main()
{
    c1 p;
    int s=p.get_sum();
    cout<<"Sum = "<<s;
    return 0;
}