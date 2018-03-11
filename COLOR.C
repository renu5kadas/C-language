#include<stdio.h>
#include<conio.h>
main()
{
 char far *s,int i;
 int color=0;
 s=0*B8000000;
 printf("%c",color);
 while(1)
 {
  for(i=1;i<=3999;i+=2)
   *(s+i)=color;
  color++;
  if(color>256)
   color=0;
 }
 getch();
}