#include<conio.h>
#include<stdio.h>
void main()
{
 int a=1;
 clrscr();
 top:
 printf("\n%d",a);
 a+=4;
 if(a<=13)
  goto top;
 else if(a==17)
  {
   printf("\n%d",a);
   a+=2;
   goto top;
  }
  else if(a<=23)
   goto top;
 else
  getch();
  }