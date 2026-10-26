#include<stdio.h>
void main()
{
  float a,b;
  int choice;
  printf("Entre two numbers");
  scanf("%f%f",&a,&b);
  printf("1.Addition\n 2.subtraction\n 3.multiplication\n 4. division\n");
  printf("Entre your choice");
  scanf("%d",&choice);
  switch (choice){
  case 1:
  printf("Result=%f\n",a+b);
  break;
  case 2:
  printf("Result=%f\n",a-b);
  break;
  case 3:
  printf("Result=%f\n",a*b);
  break;
  case 4:
  if (b==0)
  printf("Division by zero is not possible\n");
  else
  printf("Result=%f\n",a/b);
  break;
  default:
  printf("Invalid option\n");
  }
}