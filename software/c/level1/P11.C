#include <stdio.h>
int main()
{
    int unit;
    float bill,surcharge,T;
    scanf("%d",&unit);
    if (unit<=0)
    {
        printf("Bill amount before surcharge: Rs. 0.00\n");
        printf("Surcharge amount: Rs. 0.00\n");
        printf("Total bill amount after surcharge: Rs. 0.00\n");
        return 0;
    }
    if (unit<=50)
    {
        bill=unit*0.50;
    }
    else if (unit<=150)
    {
        bill=(50*0.50)+(unit-50)*0.75;
    }
    else if (unit<=250)
    {
        bill=(50*0.50)+(100*0.75)+(unit-150)*1.20;
    }
    else
    {
        bill=(50*0.50)+(100*0.75)+(100*1.20)+(unit-250)*1.50;
    }
    surcharge=0.20*bill;
    T=bill+surcharge;
    printf("Bill amount before surcharge: Rs. %.2f\n", bill);
    printf("Surcharge amount: Rs. %.2f\n", surcharge);
    printf("Total bill amount after surcharge: Rs. %.2f\n", T);



    return 0;
}