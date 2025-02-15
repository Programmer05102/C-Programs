#include<stdio.h>
#include<conio.h>
void main()
{
 int a=10;
 clrscr();
 top:
 printf("\n%d",a);
 printf("\n%d",a*10);
 a+=10;
 if(a<=50)
  goto top;
 else
  goto end;

 end:
 getch();

}