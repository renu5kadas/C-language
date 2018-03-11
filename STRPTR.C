void main()
{
 int i;
 char *arr[]={"c","c++","java","python"};
 char *(*ptr)[4]=&arr;
 clrscr();
 for(i=0;i<4;i++)
 {
   printf("\n the address of %s is %u",(*ptr)[i],(*ptr)[i]);
 }
 getch();
}
