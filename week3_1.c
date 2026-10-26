#include<stdio.h>


void main()

{
    int A,B,C,D,E,F,G,result1,result2,result3,i,j;

    printf("Enter A,B,C,D,E,F,G: ");
    scanf("%d%d%d%d%d%d%d", &A,&B,&C,&D,&E,&F,&G);
    result1 = A+B*C+(D*E)+F*G;
    printf("\n Result = %d", result1);
    result2 = A/B*C-B+A*D/3;
    printf("\n Result = %d", result2);
    result3 = A++ +B-- -B;
    printf("\n Result = %d", result3 );
     printf("\n Enter the i,J values");
     scanf("%d%d",&i,&j);
    j= (i++) + (++i);
    printf("\n J = %d", j);
 }