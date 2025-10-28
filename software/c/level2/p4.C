#include<stdio.h>
int main()
{
    int num,n;
    int term=0,sum=0;
    scanf("%d %d",&num,&n);
    for (int i=1;i<=n;i++)
    {
        term=term*10+num;
        printf("%d",term);
        sum=sum+term;
        if (i<n)
        {
            printf("+");
        }
    }
    printf("\n%d",sum);
    return 0;
}