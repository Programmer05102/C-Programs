#include<stdio.h>
#include<conio.h>
 void main()
  {
   int i,n,m;
   char name[25];
   clrscr();
   printf("Enter no of Students : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
    {
     FILE *ptr;
     ptr=fopen("student.txt","a+");
     printf("Enter %d Student Name : ",i);
     scanf("%s",name);
     printf("Enter Marks of Student %d : ",i);
     scanf("%d",&m);
     fprintf(ptr,"%s : %d",name,m);
     fprintf(ptr,"\n");
     fclose(ptr);
  }
 }
