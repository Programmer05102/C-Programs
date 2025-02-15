#include<conio.h>
#include<stdio.h>
void fibonacci();
void main()
 {
  fibonacci();
 }
void fibonacci()
 {
  int a=3,b,n1=0,n2=1,sum=0;
  clrscr();
  sum=n1+n2;
  printf("Enter the Number of Terms : ");
  scanf("%d",&b);
  printf("%d \n%d ",n1,n2);
  top:
  printf("\n%d",sum);
  if(a<=b)
   {
   ++a;
   n1=n2;
   n2=sum;
   sum=n1+n2;
   goto top;
    }
   getch();
   }