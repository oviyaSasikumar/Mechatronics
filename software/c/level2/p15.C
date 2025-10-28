#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num<=0)
    {
        printf("invalid");
        return 0;
    }
    for (int i=1;i<=3;i++)
    {
        int a=num*num*num;
        printf("%d\n",a);
        num++;
    }
    return 0;
}