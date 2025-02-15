#include<stdio.h>
#include<conio.h>
 void main()
  {
   int a;
   char n[25],h[10],g[8];
   clrscr();
   printf("Enter Your Name : ");
   gets(n);
   printf("Enter Your Age : ");
   scanf("%d",&a);
   printf("Enter Your Height : ");
   scanf("%s",h);
   printf("Enter Your Gender : ");
   scanf("%s",g);
   clrscr();
   printf("Name\t: %s",n);
   printf("\nAge\t: %d",a);
   printf("\nHeight\t: %s ",h);
   printf("\nGender\t: %s ",g);
   getch();
  }