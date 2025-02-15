#include<stdio.h>
#include<conio.h>
#include<math.h>d

#define PI 3.142857

void areaofT();
void main()
 {
  clrscr();
  areaofT();
 }
void areaofT()
 {
   float altitude,base,t;
   clrscr();
   printf("\nEnter value for Altitude of Triangle : ");
   scanf("%f",&altitude);
   printf("\nEnter value for Base of Triangle : ");
   scanf("%f",&base);
   t=(1.0/2.0)*(altitude*base);
   printf("\nArea of Triangle = %.2f",t);
   getch();
 }