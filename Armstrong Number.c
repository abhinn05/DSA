#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    int count=0;
    int temp=n;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    n=temp;
    int ans=0;
    while(n>0)
    {
        ans=ans+ pow(n%10,count);
        n=n/10;
    }
    if(temp==ans)
    {
        printf("It is an Armstrong Number");
    }
    else
    {
        printf("It is not an Armstrong Number");
    }
    return 0;
}