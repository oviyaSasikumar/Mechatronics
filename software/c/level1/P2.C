#include<stdio.h>
#include <math.h>
int main()
{
    int P;
    char year[5];
    float R,A,T;
    scanf("%d %f %f %s",&P,&R,&T,&year);
    if (P==0)
    {
        printf("Error: Principal amount must be between 1 and 2^31 - 1. ");
        return 0;
    }
    
    else if(R>8.5 || R<1.0)
    {
        printf("Error: Interest rate must be between 1.0 and 8.5.");
        return 0;
    }
    A=P*pow((1+R/100),T);
    printf("A= %.2f",A);
    
    return 0;
}