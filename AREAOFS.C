#include<stdio.h>
#include<conio.h>
#include<math.h>

void areaofS();
void main()
 {
  clrscr();
  areaofS();
 }
void areaofS()
 {
   int a;
   clrscr();
   printf("\nEnter value for Square : ");
   scanf("%d",&a);
   a=pow(a,2);
   printf("\nArea of Square = %d",a);
   getch();
 }