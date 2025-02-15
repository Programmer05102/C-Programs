#include<stdio.h>
#include<conio.h>
 void delnum();
 void main()
  {
   clrscr();
   delnum();
  }
 void delnum()
  {
   FILE *ptr,*alp;
   ptr=fopen("num.txt","r+");
   alp=fopen("num.txt","w+");
   fprintf(alp," ");
   fclose(ptr);
   fclose(alp);
  }

