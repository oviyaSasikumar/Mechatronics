#include<stdio.h>
int main()
{
    int num,num1=1;
    scanf("%d",&num);
    if (num<=0)
    {
        printf("invalid");
        return 0;
    }
    for (int i=1;i<=num;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%d ",num1);
            num1++;
        }
        printf("\n");
    }
    return 0;
}