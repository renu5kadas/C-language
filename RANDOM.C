#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int i;
 clrscr();
 randomize();
 i=rand()%6+1;
 printf("%d",i);
 getch();
}