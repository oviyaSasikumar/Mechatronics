#include<stdio.h>
int main()
{
    int num,sum=0;
    scanf("%d",&num);
    if(num<0)
    {
        printf("invalid input");
        return 0;
    }
    for(int i=1;i<=num;i++)
    {
        int a=i*i;
        sum=sum+a;
    }
    printf("%d",sum);
    return 0;
}