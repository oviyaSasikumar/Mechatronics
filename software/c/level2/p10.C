#include<stdio.h>
int main()
{
    int num;
    float sum=0;
    scanf("%d",&num);
    if (num<0)
    {
        printf("invalid input");
    }
    for (int i=1;i<=num;i++)
    {
        sum=sum+(1.0/i);
    }
    printf("%.2f",sum);
    return 0;
}
