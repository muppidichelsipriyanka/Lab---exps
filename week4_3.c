#include <stdio.h>
int main() {
    int sub1,sub2,sub3,sub4,sub5;
    float tot,avg;
    printf(" enter five subject marks");
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
    tot=sub1+sub2+sub3+sub4+sub5;
    printf("\n the total marks is %f",tot);
    avg=tot/5;
    printf("\n the average of five subject marks is %f",avg);
    return 0;
}