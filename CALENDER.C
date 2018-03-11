void main()
{
 int m,y,i,s,leapdays;
 long int normaldays,totaldays;
 char *month[]={"January","February""March","April","May","June","July","August","September","October","November","December"};
 int days[]={31,0,31,30,31,30,31,31,30,31,30,31};
 int firstday,col,row,d,j;
 char ch;
 clrscr();
 printf("Enter month & Year");
 scanf("%d%d",&m,&y);
 j=1;
 while(j<=2)
 {
  normaldays=(y-1)*365L;
  leapdays=(y-1)/4-(y-1)/100+(y-1)/400;
  totaldays=normaldays+leapdays;
  if((y%400==0)||(y%100!=0&&y%4==0))
   days[1]=29;
  else
   days[1]=28;
  s=0;
  for(i=0;i<=m-2;i++)
   s=s+days[i];
  totaldays+=s;
  firstday=totaldays%7;
  col=20+firstday*6;
  clrscr();
  gotoxy(8,35);
   printf("%s%d",month[m-1],y);
  gotoxy(10,20);
  printf("MON TUE WED THU FRI SAT SUN");
  row=12;
  for(d=1;d<=days[m-1];d++)
  {
   gotoxy(row,col);
   printf("%d",d);
   col++;
   if(col>56)
   {
    row++;
    col=20;
   }
  }
   gotoxy(25,35);
   printf("Rt-Next Month");
   ch=getch();
   switch(ch)
   {
    case 100:
    m++;
    if(m>12)
     y++;m=1;
   }
  j++;
 }
}





