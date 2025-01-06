#include<iostream>
using namespace std;
class natural
{
    int n,sum;
    public:
    void get_data()
    {
        cout<<"The Number of First Natural Numbers whose sum you want = ";
        cin>>n;
    }
    void get_sum()
    {
        sum=(n*(n+1))/2;
        cout<<"Sum of First "<<n<<" Natural Numbers = "<<sum;
    }
};
int main()
{
    natural p;
    p.get_data();
    p.get_sum();
    return 0;
}