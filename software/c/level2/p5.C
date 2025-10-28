#include<stdio.h>
int main()
{
    int num,sum=0;
    scanf("%d",&num);
    for (int i=1;i<num;i++)
    {
        if (num%i==0)
        {
            printf("%d ",i);
            sum=sum+i;
        }     
    }
    printf("\n%d\n",sum);
    if (num==sum)
    {
        printf("%d is an equal number",sum);
    }
    else
    {
        printf("%d is not an equal number",sum);
    }
    return 0;
}