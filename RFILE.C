#include<stdio.h>
#include<conio.h>
 void main()
  {
   FILE *fptr;
   fptr=fopen("marks.txt","r");
   if(remove("marks.txt")==0)
    printf("File is removed");
   else
    printf("File is not removed");
   }