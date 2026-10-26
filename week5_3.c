#include<stdio.h>
#include<math.h>
void main()
{
   int a,b,c;
   float D,root1,root2;
    
    printf("Enter the values of a,b,c in the quadratic equation ax2+bx+c:");
    scanf("%d%d%d",&a,&b,&c);
    D=(b*b-(4*a*c)); 
    if(D>0)
    {
    printf(" the discriminant is %f",D);
    root1=(-b+sqrt(D))/(2*a);
    root2=(-b-sqrt(D))/(2*a);
    printf("\n the roots of the equation are %f and %f",root1,root2);
    }
    else
    printf("the roots are imaginary");
 }