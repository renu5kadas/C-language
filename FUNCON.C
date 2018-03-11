#include<stdio.h>
#include<conio.h>
#define PI 3.14
#define AREA(x)
float area(float);
void main()
{
 float r,a;
 clrscr();
 printf("Enter radius");
 scanf("%f",&r);
 a=area(r);
 printf("\n%.3f",a);
 getch();
}
float area(float x)
{
 return(PI*x*x);
}

