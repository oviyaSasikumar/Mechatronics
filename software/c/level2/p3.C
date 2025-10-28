#include<stdio.h>
int main()
{
    int num,count=1;
    scanf("%d",&num);
    if (num<=1)
    {
        printf("neither prime nor composite");
        return 0;
    }
    for (int i=2;i<num;i++)
    {
        if (num%i==0)
        {
            count=0;
            break;
        }
    }
    if (count==1)
    {
        printf("prime number");
    }
    else 
    {
        printf("composite number");
    }
    return 0;
}