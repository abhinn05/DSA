#include<stdio.h>
int main()
{
    int number;
    printf("Enter Number ");
    scanf("%d",&number);
    for(int i=2;i<=number;i++)
    {
        int prime=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                prime=1;
                break;
            } 
    
        }
        if(prime==0)
        {
        printf("%d ",i);
        }
    }
    return 0;
}