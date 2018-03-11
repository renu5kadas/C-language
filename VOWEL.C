#include<stdio.h>
#include<conio.h>
void main()
{
 char a[20],*p;
 int i=0,j=0,k=0,l=0,m=0;
 clrscr();
 gets(a);
 p=a;
 while(*p!='\0')
 {
  if(*p=='a'||*p=='A')
   i++;
  if(*p=='e'||*p=='E')
   j++;
  if(*p=='i'||*p=='I')
   k++;
  if(*p=='o'||*p=='O')
   l++;
  if(*p=='u'||*p=='U')
   m++;
  p++;
 }
 printf("\nA/a is repeted %d times",i);
 printf("\nE/e is repeted %d times",j);
 printf("\nI/i is repeted %d times",k);
 printf("\nO/o is repeted %d times",l);
 printf("\nU/u is repeted %d times",m);
 getch();
}