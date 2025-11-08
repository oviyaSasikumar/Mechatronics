#include<stdio.h>
int main()
{
    long int Sbase;
    long int Sbonus;
    long int E,Sallowance,Stotal,S;
    double P;
    scanf("%ld %ld %ld %ld",&Sbase,&Sbonus,&Sallowance,&E);
    if (Sbonus<0)
        Sbonus=0;
    if (Sallowance<0)
        Sallowance=0;

    Stotal=Sbase+Sbonus+Sallowance;
    S=Stotal-E;  
    if (Stotal==0)
    {
        
        printf("Stotal= %ld\n",Stotal);
        printf("S= %ld\n",S);
        printf("P= undefined\n");
        return 0;
    }
    P=((double)S/Stotal)*100;
    printf("Stotal= %ld\n",Stotal);
    printf("S= %ld\n",S);
    printf("P= %.2f%%\n",P);

    return 0;
}