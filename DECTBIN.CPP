#include<stdio.h>
#include<conio.h>
#include<math.h>
long binary(long);
main()
{
 long no,a;
 clrscr();
 printf("Enter a number");
 scanf("%ld",&no);
 a=binary(no);
 printf("The binary equivalent is %ld",a);
 getch();
}
long binary(long x)
{
 long y,no=0,i=0,no1=0,c;
 while(x>0)
 {
  y=x%2;
  if(y==0)
   ++i;
  if(y==1)
  {
   while(x>0)
   {
    y=x%2;
    no=no*10+y;
    x=x/2;
   }
   while(no>0)
   {
    c=no%10;
    no1=no1*10+c;
    no=no/10;
   }
   no1=no1*pow(10,i);
   return no1;
  }
  x=x/2;
 }
}





