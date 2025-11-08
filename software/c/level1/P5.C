#include<stdio.h>
int main()
{
    char name[50];
    int age;
    int gender;
    scanf("%s %d %d",&name,&age,&gender);
    if (gender!=1 && gender!=2)
    {
        printf("Please type a vaild gender");
    }
    else if(age>=18 && gender==1)
    {
        printf("Eligiblity Status: Eligible\n");
        printf("Salutation: Mr. %s\n",name);
    } 
    else if(age>=18 && gender==2)
    {
        printf("Eligiblity Status: Eligible\n");
        printf("Salutation: Ms. %s\n",name);
    }
    else if(age<18)
    {
       printf("Eligiblity Status: Not Eligible\n");
        printf("Salutation: None\n");
    }
    
    
    return 0;
}