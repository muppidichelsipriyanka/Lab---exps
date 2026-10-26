#include <stdio.h>
#include <math.h>
int main() 
{
int p,t,r;
    float CI,FA;
    printf(" enter the principal amount, time period and rate of interest:");
    scanf("%d%d%d",&p,&t,&r);
    FA = p* pow((1+r/100.0),t);
    printf("\n the final amount is %f",FA);
    CI=FA-p;
    printf(" \n the compound intrest is %f",CI);
    return 0;
}