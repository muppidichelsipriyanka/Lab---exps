#include <stdio.h>
int main() {
    float p,r,t,s;
    printf("enter the values of principal amount,rate of intrest,and time period:");
    scanf("%f %f %f",&p,&r,&t);
    s=(p*r*t)/100;
    printf(" the value of Simple intrest is%.2f",s);
    return 0;
}