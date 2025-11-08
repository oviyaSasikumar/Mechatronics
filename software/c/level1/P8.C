#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x<=0)
    {
        printf("Order has no proper quantity specified. Thank YOU!");
        
    }
    else if (x>70)
    {
        printf("Order Limit Reached. Thank YOU!");
      
    }
    else
    {
    printf("Order Confirmed. Thank YOU!");
    }

    return 0;
}