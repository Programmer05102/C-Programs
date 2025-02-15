#include<stdio.h>
#include<conio.h>
 void population();
 void main()
  {
  population();

  }
 void population()
  {
   int age[40],i,n,a=0,b=0,c=0;
   clrscr();
   printf("Enter number of Peoples : ");
   scanf("%d",&n);
   for(i=0;i<=n-1;i++)
    {
     printf("Enter Age of %d person : ",i+1);
     scanf("%d",&age[i]);
    }
   clrscr();
   for(i=0;i<=n-1;i++)
    {
     if(age[i]>=1 && age[i]<=50)
     a++;
     if(age[i]>=51 && age[i]<=80)
     b++;
     if(age[i]>=81 && age[i]<=90)
     c++;
    }
   printf("\tPeople B/W Age 1-50 : %d\n\tPeople B/W Age 51-80 : %d\n\tPeople B/W Age 81-90 : %d",a,b,c);
   getch();
  }
