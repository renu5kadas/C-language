int charge(int);
void main()
{
 int u;
 float z;
 clrscr();
 printf("Enter the units consumed");
 scanf("%d",&u);
 z=charge(u);
 printf("\nBill=%.2f",z);
 getch();
}
int charge(int x)
{
 float y;
 if(x<=100)
 {
  y=x*80/100;
  y=y+50;
 }
 if(x>100&&x<=200)
 {
  y=100*0.8+50;
  y=y+(x-100)*1;
 }
 if(x>200)
 {
  y=100*0.8+50;
  y=y+(x-100)*1;
  y=y+(x-200)*1.25;
 }
 return y;
}
