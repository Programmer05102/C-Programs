#include<stdio.h>
#include<conio.h>
 void random();
 void main()
 {
  clrscr();
  random();
 }
 void random()
  {
   int n,i,r,l;
   printf("Enter Number for Random Upto : ");
   scanf("%d",&n);
   printf("How many numbers You want to print : ");
   scanf("%d", &l);
   srand(time(NULL));
   for(i=1;i<=l;i++)
    {
     r=rand()%n+1;
     printf("[%d] ",r);
    }
  getch();
  }