#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
 char far *s;char ch;
 char far *v;int r,c;
 s=0xb8000000;
 for(c=0;c<=79;c++)
 {
  ch=*(s+c*2);
  for(r=1;r<=24;r++)
  {
   v=s+r*160+c*2;
   *v=ch;
   delay(60);
   *(v-160)=' ';
   sound(350);delay(100);
   nosound();
  }
 }
 getch();
}