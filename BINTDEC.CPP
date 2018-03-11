#include<stdio.h>
#include<conio.h>
#include<math.h>
long decimal(long);
main()
{
 long no,a;
 clrscr();
 printf("Enter a binary number");
 scanf("%ld",&no);
 a=decimal(no);
 printf("the decimal equivalent is %ld",a);
 getch();
 return 0;
}
long decimal(long x)
{
 long y,i=0,sum=0;
 while(x>0)
 {
  y=x%10;
  sum=sum+(pow(2,i)*y);
  ++i;
  x=x/10;
 }
 return sum;
}


