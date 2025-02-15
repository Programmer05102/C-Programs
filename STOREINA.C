#include<stdio.h>
#include<conio.h>
 void store();
 void main()
  {
   clrscr();
   store();
   getch();
  }
 void store()
  {
   int a[7],i;
   for(i=0;i<=6;i++)
    {
     printf("Enter Number in array %d : ",i);
     scanf("%d",&a[i]);
    }
   for(i=0;i<=6;i++)
   {
    printf("\nArray [%d] = %d",i,a[i]);
   }
   getch();
 }