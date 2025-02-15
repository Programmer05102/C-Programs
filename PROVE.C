#include<conio.h>
#include<stdio.h>
void main()
 {
  int n1=2,n2=2,n3,n4;
  clrscr();
  n3=n1+n2;
  printf("\n%d + %d = %d",n1,n2,n3);
  top:
  if(n3<32)
  {
   n3*=2;
   printf("\n%d * %d = %d",n1,n2,n3);
   goto top;
  }
  else if(n3==32)
   n4=n3-n1;
   printf("\n%d * %d = %d",n3,n1,n4);
   n3=n4/n1;
   printf("\n%d / %d = %d",n4,n1,n3);
   printf("\n\tHence Proved");
   getch();
 }