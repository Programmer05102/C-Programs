#include<stdio.h>
#include<conio.h>
int main()
 {
  int a;
  clrscr();
  for(a=1;a<=100;a++)
   {
    if(a%2==1)
      {
       textcolor(6);
       cprintf("OddNumber : ");
       printf("%d\t\t\t",a);
      }
   }
 

  getch();

 }


