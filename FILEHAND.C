#include<stdio.h>
struct student
{
 int rno;
 int per;
};
void main()
{
 char ch;
 struct student s1;
 int nb,nr,i=0;
 FILE *fp;
 clrscr();
 fopen("student.dat","a+");
 printf("Enter roll no.,percentage");
 do
 {
  scanf("%d",&s1.rno);
  scanf("%d",&s1.per);
  fwrite((char*)&s1,sizeof(s1),1,fp);
  i++;
  flushall();
  printf("Any mor no. y/n");
  ch=getche();
 }while(ch=='y');
 nb=ftell(fp);
 nr=nb/sizeof(s1);
 fseek(fp,0L,0);
 i=0;
 while(i<nr)
 {

  fread((char*)&s1,sizeof(s1),1,fp);
  printf("\n%d %d",s1.rno,s1.per);
  i++;
 }
 fclose(fp);
 getch();
}

