#include<iostream>
using namespace std;
class c1
{
   int sum;
   public:
  void get_sum(int a,int b)
  {
    sum=a+b;
  }
  void get_sum(int a,int b,int c)
  {
    sum=a+b+c;
  }
  void show()
  {
    cout<<sum<<endl;
  }
};
int main()
{
    c1 p;
    p.get_sum(3,5);
    p.show();
    p.get_sum(3,9,8);
    p.show();
    return 0;
}