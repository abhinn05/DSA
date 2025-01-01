#include<iostream>
using namespace std;
class profitloss
{
    int SP,CP,PL;
    public:
    void get_CP()
    {
       cout<<"Enter COST PRICE ";
       cin>>CP;
    }
    void get_SP()
    {
        cout<<"Enter SELLING PRICE ";
        cin>>SP;
    }
    void get_PL()
    {
        PL=SP-CP;
        if(PL>0)
    {
        cout<<"Profit of "<<PL<<" rupees";
    }
    else
    {
        if(PL==0)
        {
            cout<<"No PROFIT No LOSS";
        }
        else
        {
            cout<<"Loss of "<<(PL)*(-1)<<" rupees";
        }
    }
    }

};
int main()
{
    profitloss p;
    p.get_CP();
    p.get_SP();
    p.get_PL();
   
}