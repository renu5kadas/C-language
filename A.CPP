#include<stdio.h>
#include<conio.h>
main()
{
 FILE *fp;

 fp=fopen("a.dat","r");
 rename("a.dat","a1");
 getch();
 }