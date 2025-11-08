#include<stdio.h>
int main()
{
    int A,B,C,ang;
    scanf("%d %d %d",&A,&B,&C);
    if (A>0 && B>0 && C>0)
    {
        ang=A+B+C;
        if(ang==180)
        {
            printf("Expected Output: Valid triangle");
        }
        else
        {
            printf("Expected Output: Invalid triangle");

        }
    }
    else
    {
        printf("Expected Output: Invalid triangle");
    }
    return 0;
}