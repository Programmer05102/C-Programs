#include<stdio.h>
#include<conio.h>
void main()
 {
  char a;
  clrscr();
  printf("\nEnter Your Value : ");
  scanf("%c",&a);
  if(a>=65 && a<=90)
   {
   printf("\n %c is Capital Alphabet",a);
   }
  else if(a>=97 && a<=122)
   {
   printf("\n %c is Small Alphabet",a);
   }
  else if(a>=48 && a<=57)
   {
   printf("\n %c is a Number",a);
   }
  else
   printf("\n %c is a Special Character",a);

  getch();

 }