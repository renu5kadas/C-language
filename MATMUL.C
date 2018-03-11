#include<stdio.h>
#include<conio.h>
void main()
{
 int a[3][3],b[3][3],c[3][3],i,j,k;
 clrscr();
 printf("Enter matrix A");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
    scanf("\n%d",&a[i][j]);
  }
 }
 printf("Enter matrix B");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
    scanf("\n%d",&b[i][j]);
  }
 }
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   c[i][j]=0;
   for(k=0;k<3;k++)
    c[i][j]=c[i][j]+a[i][k]*b[k][j];
   printf("\n%d",c[i][j]);
  }
 }
 getch();
}
