#include<stdio.h>
int main()
{
    int A;
    int n500,n100,n50,n20,n10,n5,n2,n1;
    scanf("%d",&A);
    if (A==0)
    {
        printf("No cash needed");
        return 0;
    }
    if (A<0)
    {
        printf("Invalid amount");
        return 0;
    }
     
    printf("{");

    n500=A/500;
    A=A%500;
    if (n500>0)
    {
        printf("500:%d,",n500);
    }
    n100=A/100;
    A=A%100;
    if (n100>0)
    {
        printf("100:%d,",n100);
    }
    n50=A/50;
    A=A%50;
    if (n50>0)
    {
        printf("50:%d,",n50);
    }
    n20=A/20;
    A=A%20;
    if (n20>0)
    {
        printf("20:%d,",n20);
    }
    n10=A/10;
    A=A%10;
    if(n10>0)
    {
        printf("10:%d,",n10);
    }
    n5=A/5;
    A=A%5;
    if (n5>0)
    {
        printf("5:%d,",n5);
    }
    n2=A/2;
    A=A%2;
    if (n2>0)
    {
        printf("2:%d,",n2);
    }
    n1=A/1;
    A=A%1;
    if (n1>0)
    {
        printf("1:%d,",n1);
    }
    printf("}");
    return 0;
}