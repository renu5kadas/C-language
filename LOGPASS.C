#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 int i,y,j,k,x,z;
 char lg[25],ps[25];
 clrscr();
 for(i=0;i<3;i++)
 {
  gotoxy(32,i*4+10);
   printf("LOGIN    =");
  gotoxy(32,i*4+11);
   printf("PASSWORD =");
  gotoxy(44,i*4+10);
   gets(lg);
  flushall();
  x=strlen(lg);
   gotoxy(44,i*4+11);
    for(j=0;j<25;j++)
   {
    flushall();
    ps[j]=getch();
    if(ps[j]==13)
     goto out;
    gotoxy(j+44,i*4+11);
    printf("*");
    flushall();
   }
   out:
   z=strlen(ps);
   if(x+1!=z)
   {
    printf("\nWRONG LOGIN OR PASSWORD");
    goto escape;
   }
   for(k=0;k<=x-1;k++)
   {
    if(lg[k]==ps[k])
     continue;
    else
    {
     printf("\nWRONG LOGIN OR PASSWORD");
     break;
    }
   }
    if(k==x)
    {
     printf("\nOK");
     break;
    }
   escape:
 }
 if(i==3)
  printf("\nSORRY");
 getch();
}