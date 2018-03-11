#include<stdio.h>
#include<conio.h>
struct item
{
 char nm[25];
 int code;
 int scode;
 float price;
};
void main()
{
 FILE *fp;
 FILE *fp1;
 char ch,a,b,e;
 int nb,nr,i;
 struct item s;
 clrscr();
 fp= fopen("item.dat","a+");
 fp1= fopen("item1.dat","a+");
 printf("ENTER THE CHOICE");
 printf("\n1>ITEM MASTER");
 printf("\n2>SALE");
 l1:a=getch();
    switch(a)
    {
      case '1':
       clrscr();
       printf("ENTER THE CHOICE");
       printf("\n1>ADD");
       printf("\n2>DELETE");
       printf("\n3>MODIFY");
       printf("\n4>EXIT");
       l2:b=getch();
	  switch(b)
	  {
	   case '1':
	    clrscr();
	    do
	    {
	     printf("Enter name,code,state code,price");
	     gets(s.nm);
	     scanf("%d %d %f",&s.code,&s.scode,&s.price);
	     fwrite((char*)&s,sizeof(s),1,fp);
	     flushall();
	     printf("Any more y/n to add");
	     ch=getch();
	    }while(ch=='y');
	    nb=ftell(fp);
	    nr=nb/sizeof(s);
	  break;
	    case '2':
	    clrscr();
	    printf("ENTER THE CODE OF ITEM THAT U WANT TO DELETE");
	    scanf("%d",e);
	    rewind(fp);
	    i=0;
	    while(i<nr)
	    {
	     fread((char*)&s,sizeof(s),1,fp);
	     if(s.code!=e)
	      fwrite((char*)&s,sizeof(s),1,fp1);
	     if(s.code==e)
	      printf("\n%s %d %d %f",s.nm,s.code,s.scode,s.price);
	      i++;
	    }
	    fclose(fp);
	    fclose(fp1);
	    remove("item.dat");
	    rename("item1.dat","item.dat");
	   break;
	    case '3':
	    clrscr();
	   break;
	    case '4':
	    clrscr();
	    goto x;
	    default:
	     printf("\nINVALID CHOICE,ENTER AGAIN");
	     goto l2;
	   }
      break;
      case '2':
       clrscr();
      break;
      default:
       printf("\nINVALID CHOICE,ENTER AGAIN");
       goto l1;
     }
  x: printf("THANK  YOU!! BYE BYE");
  getch();
 }