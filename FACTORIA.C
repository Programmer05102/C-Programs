#include<stdio.h>
#include<conio.h>
 void fact();
 void main()
  {
   clrscr();
   fact();
  }
 void fact()
  {
   int n,i,f=1;
   printf("Enter Number for a Factorial : ");
   scanf("%d",&n);
   for(i=n;i>=1;i--)
    {
     f=f*i;
    }
   printf("The factorial of %d is %d " ,n,f);
   getch();
  }