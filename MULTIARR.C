#include<stdio.h>
#include<conio.h>
 void main()
  {
   clrscr();
   int i,j,table[100][100];
   for(i=1;i<=10;i++)
    {
     for(j=1;j<=10;j++)
      {
       table[i][j]=i*j;
       printf("[%d]\t",table[i][j]);
      }
    }

   getch();
  }
