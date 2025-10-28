#include<stdio.h>
int main ()
{
   int num,num1=0,num2=1;
   scanf("%d",&num);
   if (num<0)
   {
    printf("invalid input");
   }

   for (int i=1;i<=num;i++)
   {
    printf("%d,",num1);
    int a=num1+num2;
    num1=num2;
    num2=a;
   }
    return 0;
}