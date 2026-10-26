#include <stdio.h>
#include <math.h>
int main() {
    float s,u,t,a;
    printf("\n enter initial velocity in m/s and time in s");
    scanf("%f %f",&u,&t);
    printf("\n enter accerelation value:");
    scanf("%f", &a);
    s=(u*t)+(a*t*t)/2;
    printf(" the distance travelled by object is%.2f",s);
    return 0;
}