#include<stdio.h>
#include<conio.h>
 void main()
  {
   clrscr();
   int a,b;
   printf("Enter First Number : ");
   scanf("%d",&a);
   printf("Enter Second Number : ");
   scanf("%d",&b);
   if(a<b)
    printf("%d is Bigger than %d ",b,a);
   else
    printf("%d is Bigger than %d ",a,b);
   getch();
  }