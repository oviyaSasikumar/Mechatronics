#include<stdio.h>
int main()
{
    int num,sum=0;
    scanf("%d",&num);
    for (int i=1;i<num;i++)
    {
        if (num%i==0)
        {
            sum=sum+i;
        }
    }
    if (sum>num)
    {
        printf("%d is an abundant number",num);
    }
    else
    {
        printf("%d is not an abundant number",num);
    }

    return 0;
}