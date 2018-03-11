void main()
{
 int i=0,j,k,b[7],max=0;
 char a[25],c[25];
 clrscr();
 printf("Enter a sentence");
 gets(a);
 for(j=0;j<7;j++)
 {
  k=0;
  while(a[i]!=32||a[i]!=13)
  {
   c[k]=a[i];
   i++;
   k++;
  }
  ++i;
  b[j]=k;
  if(max<b[j])
   max=b[j];
 }
 printf("max is %d",max);
 getch();
}

