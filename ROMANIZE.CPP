#include<stdio.h>
#include<conio.h>
int romanize(int,int,char);
void main()
{
 int y;
 clrscr();
 printf("Enter a year");
 scanf("%d",&y);
 y=romanize(y,1000,'m');
 y=romanize(y,500,'d');
 y=romanize(y,100,'c');
 y=romanize(y,50,'l');
 y=romanize(y,10,'x');
 y=romanize(y,5,'v');
 romanize(y,1,'i');
 getch();
}
int romanize(int y,int j,char ch)
{
 int n,i;
 n=y/j;
 for(i=1;i<=n;i++)
  printf("%c",ch);
 return y%j;
}
