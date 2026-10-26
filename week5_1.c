#include<stdio.h>
void main()
{
    int n1,n2,n3,n4,max1, max2,min1,min2,max,min ;
    printf("Enter the numbers ");
    scanf("%d%d%d%d", &n1,&n2,&n3,&n4);
    if (n1>n2)
    {  max1=n1;
      min1= n2;
     printf("\n n1 is max1 ,n2 is min1");
     }
     else 
     {  max1= n2;
         min1= n1;
     printf("\n n2 is max1,n1 is min1");
     }
    if (n3>n4) 
    {   max2=n3;
        min2= n4;
    printf("\n n3 is max2 ,n4 is min2");
    }
     else 
    {    max2= n4;
         min2= n3;
     printf(" \n n4 is max2,n3 is min2");
    }
    if (min1>min2)
    printf( "\n min is min2");
    else 
    printf("\n min is min 1");
    if (max1>max2)
    printf( "\n max is max1");
    else 
    printf("\n max is max 2");
 }