#include<stdio.h>
int main()
{
    int Salary;
    float Bonus;
    char Gender;
    scanf("%d %c", &Salary, &Gender);
    
    if(Gender!='M' && Gender!='F')
    {
        printf("Gender Should be 'M' for Male and 'F' for Female");
        return 0;
    }
    if(Salary<=0)
    {
        Bonus=0;
    }
    else if (Salary<25000)
    {
        Bonus=5000;
    }
    else if (Salary>=25000 && Salary<=50000)
    {
        Bonus=7500;
    }
    else if (Salary>50000)
    {
        if (Gender=='M')
        {
            Bonus=0.10*Salary;
        }
        else if (Gender=='F')
        {
            Bonus=0.15*Salary;
        }
    }
    printf("Bonus = Rs. %.2f",Bonus);

    return 0;
}