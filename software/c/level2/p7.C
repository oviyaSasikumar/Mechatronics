#include<stdio.h>
int main()
{
    int year,count=0;
    scanf("%d",&year);
    if ((year%4==0 && year%100!=0) || (year%400==0))
    {
       printf("%d is a leap year\n",year);
            
    }
    else
    {
        printf("%d is not a leap year\n",year);

    }    
    for(int i=year;i<year+10;i++)
    {
       if ((i%4==0 && i%100!=0) || (i%400==0))
       {
        count++;
       }
    }
    printf("leap year: %d\n",count);
    int c=10-count;
    printf("non leap years: %d",c);
    return 0;
}