#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
 int i;
 char far *s;
 while(1)
 {
  s=(char far *) 0xB8000000;
  for(i=0;i<3998;i+=2)
   {
    if(*(s+i)>='A'&&*(s+i)<='Z')
     *(s+i)=*(s+i)+32;
    else
    {
     if(*(s+i)>='a'&&*(s+i)<='z')
      *(s+i)=*(s+i)-32;
    }
   }
 }
 getch();
}