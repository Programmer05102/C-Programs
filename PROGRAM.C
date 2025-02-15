#include<stdio.h>
#include<conio.h>
void main()
 {
  int i,c,cpp,java,asp,jsp,scr,css,w,m;
  clrscr();
  i=24*7;
  c=(i*5)/2;
  w=c/7;
  m=c/30;
  printf("\t\tDays\t\tWeeks\t\tMonths \n");
  printf("\nFor C\t    %d Days \t     %d Weeks \t     %d Months",c,w,m);
  cpp=(i*6)/2;
  w=cpp/7;
  m=cpp/30;
  printf("\nFor C++\t    %d Days \t     %d Weeks \t     %d Months",cpp,w,m);
  java=(i*12)/2;
  w=java/7;
  m=java/30;
  printf("\nFor Java   %d Days \t    %d Weeks \t     %d Months",java,w,m);
  asp=(i*8)/2;
  w=asp/7;
  m=asp/30;
  printf("\nFor ASP\t    %d Days \t     %d Weeks \t     %d Months",asp,w,m);
  jsp=(i*10)/2;
  w=jsp/7;
  m=jsp/30;
  printf("\nFor JSP\t    %d Days \t    %d Weeks \t     %d Months",jsp,w,m);
  scr=(i*20)/2;
  w=scr/7;
  m=scr/30;
  printf("\nFor Script %d Days \t    %d Weeks \t     %d Months",scr,w,m);
  css=(i*12)/2;
  w=css/7;
  m=css/30;
  printf("\nFor CSS\t   %d Days \t    %d Weeks \t     %d Months",css,w,m);

  getch();
 }

