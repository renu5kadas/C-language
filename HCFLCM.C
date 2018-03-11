#include<stdio.h>
#include<conio.h>
int hlcm(int,int);
void main()
{
 int a,b,c,lcm;
 clrscr();
 printf("Enter two numbers");
 scanf("%d%d",&a,&b);
 c=hlcm(a,b);
 printf("\nHCF=%d",c);
 lcm=a*b/c;
 printf("\nLCM=%d",lcm);
 getch();
}
int hlcm(int x,int y)
{
 int i,z;
 if(x>y)
  {
   for(i=x-1;i>=1;i--)
    {
     if(x%i==0&&y%i==0)
     {
      z=i;
      break;
     }
    }
  }
 if(y>x)
  {
   for(i=y-1;i>=1;i--)
    {
     if(x%i==0&&y%i==0)
     {
       z=i;
      break;
     }
    }
  }
 if(y==x)
  z=i;
 return z;
}