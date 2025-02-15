#include<stdio.h>
#include<conio.h>
void main()
 {
  int a;
  clrscr();
  for(a=1;a<=100;a++)
   {
    if(a%2==0)
     {
     textcolor(6);
     cprintf("EvenNumber : ");
     printf("%d\t\t\t",a);
   }
   }
  getch();

 }

