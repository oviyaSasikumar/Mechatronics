#include<stdio.h>
int main()
{
    float gross,bsalary;
    scanf("%f",&bsalary);
    if (bsalary<=0)
    {
        printf("Invalid salary");
        return 0;
    }
    if (bsalary<=10000)
    {
        gross=(0.20+0.80)*bsalary+bsalary;
        printf("Gross Salary= %.2f",gross);
    }
    else if ( bsalary>10000 && bsalary<=20000)
    {
        gross=(0.25+0.90)*bsalary+bsalary;
        printf("Gross Salary= %.2f",gross);

    }
    else if (bsalary>20000)
    {
        gross=(0.30+0.95)*bsalary+bsalary;
        printf("Gross Salary= %.2f",gross);
    }    


    return 0;
}