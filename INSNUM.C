#include<stdio.h>
#include<conio.h>
 void insnum();
 void main()
  {
   clrscr();
   insnum();
  }
 void insnum()
  {
   FILE *ptr;
   ptr=fopen("num.txt","w+");
   fprintf(ptr,"%d",20);
   fclose(ptr);
  }