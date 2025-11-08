#include<stdio.h>
int main()
{
    int N,D;
    scanf("%d %d",&N,&D);
    if (N<=0 || N>D)
    {
        printf("Invalid Dice Roll");
    }
    else if (D<=0)
    {
        printf("Invalid Position of the Player");
    }
    else if (N%2==1)
    {
        D=D*3;
        printf("Player moves forward %d units",D);
    }
    else if (N%2==0)
    {
        D=D/3;
        printf("Player moves backward %d units",D);
    }
        
    return 0;
}