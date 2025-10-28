#include<stdio.h>
int main()
{
    int num,count=0;
    scanf("%d",&num);
    int next=num+1;
    while(count<5)
    {
        int isprime=1;
        for (int i=2;i<next;i++)
        {
            if (next%i==0)
            {
                isprime=0;
                break;
            }           
        }
         if (isprime==1)
        {
            printf("%d\n",next);
            count++;
        }
        next++;
    }
  
    return 0;
}


















