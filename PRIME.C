#include<stdio.h>
#include<conio.h>
 void prime();
 void main()
 {
  clrscr();
  prime();
 }
 void prime()
  {
   int n,i,m,prime=0;
   printf("Enter Number for Prime : ");
   scanf("%d",&n);
   m=n/2;
   for(i=2;i<=m;i++)
   {
    if(n%i==0)
    {
     printf("%d is not a Prime",n);
     prime=1;
     break;
    }
   }
  if(prime==0)
  {
   printf("%d is a Prime",n);
  }
  getch();
  }