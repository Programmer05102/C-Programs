#include<stdio.h>
#include<conio.h>
#include<string.h>

 void main()
  {
   int i,l,j;
   char name[40];
   clrscr();
   printf("Enter Your Name : ");
   gets(name);
   l=strlen(name);
   for(i=0;i<=l;i++)
   if(name[i]==' ')
    {
     for(j=1;j<=20;j++)
     {
      printf("%c\n",name[i+1]);
     }
    }

   getch();
  }