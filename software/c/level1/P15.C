#include<stdio.h>
int main()
{
    int C,T;
    scanf("%d %d",&C,&T);
    if (C<=0)
    {
        printf("Invalid credit limit");

    }
    else if (T<=0)
    {
        printf("Invalid transaction amount");
    }
    else if (T<=C)
    {
        printf("Transaction Approved");
    }
    else if (T>C)
    {
        printf("Transaction Declined");
    }
    return 0;
}