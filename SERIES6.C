#include<stdio.h>
#include<conio.h>
void main()
 {
  int a=2,b=21;
  clrscr();
  top:
  printf("\n%d",a);
  printf("\n%d",b);
  a+=1;
  b+=10;
  if(a<=6 && b<=61)
    goto top;

  getch();

 }