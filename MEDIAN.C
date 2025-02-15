#include<stdio.h>
#include<conio.h>
 void main()
 {
  clrscr();
  int i,j,n=10;
  float median,t,array[10];
  printf("Enter 10 values for Median :\n");
  for(i=0;i<n;i++)
  {
   scanf("%f",&array[i]);
  }
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
   {
    if(array[j]<=array[j+1])
    {
     t=array[j];
     array[j]=array[j+1];
     array[j+1]=t;
    }
   }
  }
  if(n%2==0)
  {
   median=(array[n/2]+array[(n+2)/2])/2.0;
  }
  else
  {
   median=array[(n+1)/2];
  }
  printf("%.2f",median);
  getch();
 }