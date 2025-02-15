#include<stdio.h>
#include<conio.h>
void main()
{
 int a=1,b=0;
 clrscr();
 top:
 printf("\n%d",a);
 printf("\n%d",b);
 a++;
 b++;
 if(a<=6 && b<=6)
  goto top;
 else
  goto end;

 end:

 getch();

}
