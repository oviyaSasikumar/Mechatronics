#include<stdio.h>
int main()
{
    int P,Q,T;
    float A;
    scanf("%d %d",&P,&Q);
    T=P*Q;
    if (P<=0 && Q<=0)
    {
        printf("Invalid price and quantity");
    }
    else if (P<=0)
    {
        printf("Invalid price");
    }
    else if (Q<=0)
    {
        printf("Invalid quantity");
    }
    
    else if (T%2==0)
    {
        A=T*0.90;
        printf("A=%.2f",A);
    }
    else if (T%2!=0)
    {
        A=T*0.85;
        printf("A=%.2f",A);
    }

    return 0;
}