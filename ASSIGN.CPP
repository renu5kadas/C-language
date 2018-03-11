#include<stdio.h>
struct item
{
 int code;
 char nm[25];
 float price;
 int scode;
};
void main()
{
 char ch,a;
 int nb,nr,i;
 struct stud s1;
 clrscr();
 FILE *fp;
 fp=fopen("item.dat","a+");
 printf("ENTER THE CHOICE");
 printf("\n1>ITEM MASTER");
 printf("\n2>SALE");
 l1:a=getch();
    switch(n)
    {
      case '1':
       clrscr();
       break;
      case '2':
       clrscr();
       break;
      default:
       printf("INVALID CHOICE,ENTER AGAIN");
       goto l1;
     }
  getch();
 }