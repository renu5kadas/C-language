#include<stdio.h>
#include<conio.h>
#define SIZE 10
void main()
{
 int a[SIZE][SIZE],big,i,j;
 char ch;
 clrscr();
 printf("Enter matrix");
 i=0;
 do
 {
  for(j=0;j<=i;j++)
  {
   gotoxy(i+3,j+3);
    scanf("%d",&a[i][j]);
   gotoxy(i,j+9);
    printf("any more no. y/n");
   ch=getch();
  }
  i++;
 }while(ch=='y');
 getch();
}
