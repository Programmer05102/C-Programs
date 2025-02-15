#include<stdio.h>
#include<conio.h>
void main()
 {
  int a,sum;
  clrscr();
  for(a=1;a<=100;a++)
   {
    if(a%2==1)
      {
      sum+=a;
      }
   }
  printf("\nThe Sum of Odd Numbers From 1 To 100 is %d",sum);

  getch();

 }

