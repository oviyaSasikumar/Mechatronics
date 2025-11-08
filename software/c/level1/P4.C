#include<stdio.h>
int main()
{
    int sell,cost,P;
    scanf("%d %d",&cost,&sell);
    if(cost<0)
    {
        printf("Error: Cost price (C) cannot be negative.");
        return 0;
    }
    P=sell-cost;
    if (P>0)
    {
        printf("P= %d\n",P);
        printf("Result: Profit\n");
    }
    else if (P<0)
    {
        printf("P= %d\n",P);
        printf("Result: Loss\n");

    }
    else if (P==0)
    {
        printf("P= %d\n",P);
        printf("Result: Break-even\n");

    }

    return 0;
}