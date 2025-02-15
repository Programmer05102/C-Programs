#include<stdio.h>
#include<conio.h>
void main()
 {
  int i,j,k,l,m=10;
  clrscr();
  for(i=1;i<=5;i++)
   {
    gotoxy(35,m);
    for(j=1;j<=i;j++)
     {
      printf("%d",j);
     }
    m++;
    for(j=5;j>=1;j--)
     {
      if(j<=i)
       {
	printf("%d",j);
       }
      else
       printf("  ");
     }
    printf("\n");
    }
   getch();

  }