#include<stdio.h>
struct student
{
 char nm[25];
 int rno;
 int per;
};
void main()
{
 char ch;
 struct student s[2];
 int nb,nr,i=0;
 FILE *fp;
 clrscr();
 fopen("student.dat","a+");
 printf("Enter name,roll no.,percentage");
 do
 {
  gets(s[i].nm);
  scanf("%d",&s[i].rno);
  scanf("%d",&s[i].per);
  fwrite((char*)&s[i],sizeof(s[i]),1,fp);
  i++;
 }while(i!=2);
 nb=ftell(fp);
 nr=nb/sizeof(s[i]);
 printf("%d %d %d",sizeof(s[i]),nb,nr);
 fseek(fp,0L,0);
 i=0;
 while(i<=1)
 {
  fread((char*)&s[i],sizeof(s[i]),1,fp);
  printf("%s %d %d",s[i].nm,s[i].rno,s[i].per);
  i++;
 }
 fclose(fp);
 getch();
}

