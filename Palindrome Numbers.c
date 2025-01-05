#include<stdio.h>
int main()
{
   int number;
   int ans=0;
   printf("Enter Number ");
   scanf("%d",&number);
   int temp=number;
   while(number>0)
   {
     ans=ans*10+(number%10);
     number=number/10;
   }
   if(temp==ans)
   {
    printf("IT IS A PALINDROME");
   }
   else
   {
    printf("IT IS NOT A PALINDROME");
   }
   return 0;
}