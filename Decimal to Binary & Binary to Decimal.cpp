#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n = 5;
    int ans = 0;
    int i = 0;
    while(n!=0)
    {
        int bit = n & 1;
        
        ans = (bit * pow(10,i)) + ans;
        
        n = n>>1;
        i++;
    }
    cout<<"Binary : "<<ans<<endl;;
    
    int ans2 = 0;
    int j = 0;
    while(ans!=0)
    {
        int digit = ans % 10;
        if(digit==1)
        {
            ans2 = ans2 + pow(2,j);
        }
        
        ans = ans / 10;
        j++;
    }
    
    cout<<"Decimal : "<<ans2;
    

    return 0;
}