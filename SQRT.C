#include<stdio.h>
#include<conio.h>
#include<math.h>

void Sqrt();
void main()
 {
  clrscr();
  Sqrt();
 }
void Sqrt()
 {
   int a;
   clrscr();
   printf("\nEnter value for Square Root : ");
   scanf("%d",&a);
   a=sqrt(a);
   printf("\nValue of Square Root = %d",a);
   getch();
 }