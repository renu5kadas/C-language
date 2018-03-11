#include<stdio.h>
struct prod
{
 int code;
 int scode;
 char nm[25];
 float price;
};
void main()
{
 int i,k=0;
 char j,ch,nb,nr;
 struct prod p[100];
 FILE *fp;
 clrscr();
 fp=fopen("item.dat","a+");
 printf("1>ITEM MASTER");
 printf("\n2>SALE");
 printf("\nSelect a choice no.");
 scanf("%d",&i);
 switch(i)
 {
  case 1:
  clrscr();
  printf("a>ADD");
  printf("\nb>DELETE");
  printf("\nc>MODIFY");
  printf("\nd>exit");
  printf("\nSelect a choice code");
  flushall();
  scanf("%c",&j);
  switch(j)
  {
   case 'a':
   clrscr();
   printf("Enter code,state code,name and price");
   do
   {
    printf("\nITEM CODE:");
    scanf("%d",&p[k].code);
    printf("\nSTATE CODE:");
    scanf("%d",&p[k].scode);
    printf("\nNAME:");
    flushall();
    gets(p[k].nm);
    printf("\nPRICE:");
    scanf("%f",p[k].price);
    fwrite((char*)&p[k],sizeof(p[k]),k,fp);
    flushall();
    printf("\nANY MORE y/n");
    ch=getche();
   }while(ch=='y');
   nb=ftell(fp);
   nr=nb/sizeof(p[k]);
   break;
   case 'b':
   clrscr();
   break;
   case 'c':

   clrscr();
   break;
   case 'd':
   exit();
   break;
   default:
   printf("\nINVALID CHOICE");
  }
  break;
  case 2:
  clrscr();
  break;
  default:
  printf("\nINVALID CHOICE");
 }
 getch();
}