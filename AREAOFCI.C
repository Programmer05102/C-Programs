#include<stdio.h>
#include<conio.h>
#include<math.h>

#define PI 3.142857

void areaofC();
void main()
 {
  clrscr();
  areaofC();
 }
void areaofC()
 {
  float a,r;
  printf("Enter the Radius of Circle : ");
  scanf("%f",&r);
  a=(PI)*(pow(r,2));
  printf("Area of Circle is %.2f ",a);
  getch();
 }