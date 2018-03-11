#include<stdio.h>
#include<conio.h>
#define PI 3.14
#define AREA(x) PI*x*x
void main()
{
 float r,a;
 clrscr();
 printf("Enter radius");
 scanf("%f",&r);
 a=AREA(r);
 printf("\n%.3f",a);
 getch();
}


