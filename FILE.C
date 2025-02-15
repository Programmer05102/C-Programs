#include<stdio.h>
#include<conio.h>
 void main()
  {
   FILE *ptr;
   ptr=fopen("student.txt","a+");
   fprintf(ptr,"Name : Hisham Ahmed");
   fprintf(ptr,"\nRoll No : CSC-22S-052");
   fprintf(ptr,"\nBatch : 2021-22");
   fprintf(ptr,"\nDepartment : Computer Science");
   fclose(ptr);
  }
