#include<stdio.h>
#include<conio.h>
# define SIZE 100
void main()
{
 int a[SIZE],i,j,k,l=-1;
 char ch;
 clrscr();
 i=0;
 do
 {
  printf("\nEnter no.");
  scanf("%d",&a[i]);
  printf("Any more no. y/n");
  ch=getche();
  i++;
 }while(ch=='y');
 printf("\nEnter no. in array which you want to find how many times is repeted");
 scanf("%d",&k);
 for(j=0;j<i;j++)
 {
  if(k==a[j])
  {
   l=j;
   printf("%d,",l);
  }
 }
 printf("\n%d is the number which is %d times repeted in the array",k,++l);
 getch();
}

