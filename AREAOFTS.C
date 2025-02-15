#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.1415927
 void main()
  {
   float altitude,base,radius,t,s;
   clrscr();
   printf("\n\n\t\tEnter value for Altitude of Triangle : ");
   scanf("%f",&altitude);
   printf("\n\n\t\tEnter value for Base of Triangle : ");
   scanf("%f",&base);
   printf("\n\n\t\tEnter value for Radius of Sphere : ");
   scanf("%f",&radius);
   t=(1.0/2.0)*(altitude*base);
   s=(4.0/3.0)*pi*pow(radius,3);
   if(t<s)
    {
     printf("\n\n\t\tArea of Triangle = %.2f",t);
     printf("\n\n\t\tArea of Sphere = %.2f",s);
    }
   else
    {
     printf("\n\n\t\tArea of Sphere = %.2f",s);
     printf("\n\n\t\tArea of Triangle = %.2f",t);
    }
   getch();
  }