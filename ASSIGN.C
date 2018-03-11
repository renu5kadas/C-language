#include<stdio.h>
#include<conio.h>
struct item
{
 char nm[25];
 int code;
 int scode;
 float price;
};
struct invoice
{
 int icode;
 int q;
 char nm1[25];
 char date[10];
 int inv;
};
void main()
{
 FILE *fp;
 FILE *fp1;
 FILE *fp2;
 FILE *fp3;
 char ch,ch1,a,b,c,f;
 int nb,nr,i,e,nb1,nr1,nb2,nr2;
 struct item s;
 struct invoice b1;
 clrscr();
 m:
 fp= fopen("item.dat","a+");
 fp1= fopen("item1.dat","a+");
 fp2= fopen("sale.dat","a+");
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
	     flushall();
	     gets(s.nm);
	     scanf("%d %d %f",&s.code,&s.scode,&s.price);
	     fwrite((char*)&s,sizeof(s),1,fp);
	     flushall();
	     printf("Any more y/n to add");
	     ch=getch();
	    }while(ch=='y');
	    nb=ftell(fp);
	    nr=nb/sizeof(s);
	    goto m;
	  break;
	    case '2':
	    clrscr();
	    fseek(fp,0L,0);
	    printf("ENTER THE CODE OF ITEM THAT U WANT TO DELETE");
	    scanf("%d",&e);
	    i=0;
	    while(i<nr)
	    {
	     fread((char*)&s,sizeof(s),1,fp);
	     if(e!=s.code)
	      fwrite((char*)&s,sizeof(s),1,fp1);
	     if(e==s.code)
	      printf("\n%s %d %d %f",s.nm,s.code,s.scode,s.price);
	      i++;
	    }
	    nb1=ftell(fp1);
	    nr1=nb1/sizeof(s);
	    i=0;
	    fclose(fp);
	    remove("item.dat");
	    fopen("item.dat","a+");
	    while(i<nr1)
	    {
	     fread((char*)&s,sizeof(s),1,fp1);
	     fwrite((char*)&s,sizeof(s),1,fp);
	      i++;
	    }
	    remove("item1.dat");
	    fclose(fp);
	    goto m;
	   break;
	    case '3':
	    clrscr();
	    fseek(fp,0L,0);
	    printf("ENTER THE CODE OF ITEM THAT U WANT TO MODIFY");
	    scanf("%d",&e);
	    i=0;
	    while(i<nr)
	    {
	     fread((char*)&s,sizeof(s),1,fp);
	     if(e!=s.code)
	      fwrite((char*)&s,sizeof(s),1,fp1);
	     if(e==s.code)
	     {
	      printf("\n%s %d %d %f",s.nm,s.code,s.scode,s.price);
	      printf("\nDo you really want to modify this details");
	      c=getch();
	      if(c=='y')
	       {
		printf("\nEnter new name,code,state code,price");
		flushall();
		gets(s.nm);
		scanf("%d %d %f",&s.code,&s.scode,&s.price);
		flushall();
		fwrite((char*)&s,sizeof(s),1,fp1);
	       }
	      }
	      i++;
	    }
	    nb1=ftell(fp1);
	    nr1=nb1/sizeof(s);
	    i=0;
	    fclose(fp);
	    remove("item.dat");
	    fopen("item.dat","a+");
	    while(i<nr1)
	    {
	     fread((char*)&s,sizeof(s),1,fp1);
	     fwrite((char*)&s,sizeof(s),1,fp);
	      i++;
	    }
	    remove("item1.dat");
	    goto m;
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
       printf("ENTER THE CHOICE");
       printf("\n1>ADD");
       printf("\n2>DELETE");
       printf("\n3>MODIFY");
       printf("\n4>DISPLAY");
       l3:f=getch();
       switch(f)
       {
       case '1':
       i=0;
       while(i<nr)
       {
	fread((char*)&s,sizeof(s),1,fp);
	printf("\n%s %d",s.nm,s.code);
	i++;
       }
       do
       {
	flushall();
	printf("\nENTER ITEM CODE AND QUANTITY");
	scanf("\n%d %d",&b1.icode,&b1.q);
	printf("\nENTER NAME,DATE");
	flushall();
	gets(b1.nm1);
	flushall();
	gets(b1.date);
	fwrite((char*)&b,sizeof(b1),1,fp2);
	printf("\nAny more y/n");
	ch1=getch();
       }while(ch1=='y');
       nb2=ftell(fp2);
       nr2=nb2/sizeof(b1);
       i=0;
       while(i<nr2);
       {

      }
      }


       break;
      default:
       printf("\nINVALID CHOICE,ENTER AGAIN");
       goto l1;
     }
  x: printf("THANK  YOU!! BYE BYE");
  getch();
 }