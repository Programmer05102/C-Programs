#include<stdio.h>
#include<conio.h>
void main()
{
 int a=1,b=10;
 clrscr();
 top:
 printf("\n%d",a);
 printf("\n%d",b);
 a++;
 b--;
 if(a<=10 && b>=1)
  goto top;

 getch();

}

