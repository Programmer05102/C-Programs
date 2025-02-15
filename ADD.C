#include<stdio.h>
#include<conio.h>
 void add();
 void main()
  {
   add();
  }
 void add()
  {
   int a,b,s;
   clrscr();
   printf("Enter Your First Number :");
   scanf("%d",&a);
   printf("Enter Your Second Number :");
   scanf("%d",&b);
   s=a+b;
   printf("\n%d + %d = %d ",a,b,s);
   getch();
  }