#include<stdio.h>
#include<conio.h>
 void main()
  {
   int a,b;
   clrscr();
   printf("Enter First Number : ");
   scanf("%d",&a);
   printf("Enter Second Number : ");
   scanf("%d",&b);
   if(a<b)
    printf("Second Number is Bigger than %d ",a);
   else
    printf("First Number is Bigger than %d ",b);
   getch();
  }