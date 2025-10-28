#include<stdio.h>
int main()
{
    int num,sum1=0,sum2=0;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if (i%2==0)
        {
            sum1=sum1+i;
        }
        else if (i%2!=0)
        {
            sum2=sum2+i;
        }
    }
    printf("%d\n%d",sum1,sum2);
    return 0;
}