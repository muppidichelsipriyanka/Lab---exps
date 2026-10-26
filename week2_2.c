#include <stdio.h>
int main() {
    float fahrenheit,celsius;
    
    printf("enter fahrenheit value:");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("\n temperature in celsius is %f",celsius);
    
    printf("\nenter celsius value:");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("\n temperature in fahrenheit is %f",fahrenheit);
    return 0;
}