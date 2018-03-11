#include<stdio.h>
#include<conio.h>
# define SIZE 100
void main()
{
 int a[SIZE],i,j;
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
 printf("\nEven no.s in array are");
 for(j=0;j<i;j++)
 {
  if(a[j]%2==0)
   printf("\n%d",a[j]);
 }
 printf("\nodd no.s in array are");
 for(j=0;j<i;j++)
 {
  if(a[j]%2!=0)
   printf("\n%d",a[j]);
 }
 getch();
}

