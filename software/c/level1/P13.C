#include<stdio.h>
int main()
{
    int L,W,area;
    scanf("%d %d",&L,&W);
    if (L==0 && W==0)
    {
        printf("Shape: Invalid\n");
        printf("Area: Invalid");
    }
     else if (L<0 && W<0)
    {
        printf("Shape: Invalid (Length and Width cannot be negative)\n");
        printf("Area: Invalid");

    }
    else if (L<0)
    {
        printf("Shape: Invalid (Length cannot be negative)\n");
        printf("Area: Invalid");
    }
    else if (W<0)
    {
        printf("Shape: Invalid (Width cannot be negative)\n");
        printf("Area: Invalid");
    }
   
    else if (L==W)
    {
        printf("Shape: Square\n");
        area=L*W;
        printf("Area: %d",area);
    }
    else
    {
        area=L*W;
        printf("Shape: Rectangle\n");
        printf("Area: %d",area);
    }    


    return 0;
}