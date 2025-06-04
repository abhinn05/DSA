#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int t;
    
    cin>>t;
    
    while(t--)
    {
        string str;
        
        cin>>str;
        int num = stoi(str);

        bool found = false;    
    
        int root = sqrt(num);
        if(root*root == num)
        {
            for(int a=0;a<=root;a++)
            {
                int b = root - a;
                if(a>=0 && b>=0)
                {
                    cout<<a<<" "<<b<<endl;
                    found = true;
                    break;
                }
            }
        }

        if(!found)
        {
            cout<< -1 <<endl;
        }
    }
    return 0;
}