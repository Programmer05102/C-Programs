#include<stdio.h>
#include<conio.h>
 void main()
 {
  int i,n[26];
  char a[10];
  clrscr();
  printf("Enter any String (Limit:10 char) : ");
  gets(a);
  printf("\nThe number of Char used is : ");
  for(i=0;i<26;i++)
  {
   n[i]=0;
  }
  for(i=0;i<10;i++)
  {
   if(a[i]>='a' && a[i]<='z')
   {
    n[a[i]-97]++;
   }
   else if(a[i]>='A' && a[i]<='Z')
   {
    n[a[i]-65]++;
   }
  }
  for(i=0;i<26;i++)
  {
   if(n[i] != 0)
   {
    printf("\n%c = %d",(i+97),n[i]);
   }
  }

  getch();
 }