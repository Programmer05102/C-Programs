#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
void main()
 {
  int gd=DETECT,gm,x,y,i;
  initgraph(&gd, &gm, "C://TURBOC3//BGI");
  for(i=1;i<=30000;i++)
   {
    rectangle(200,150,400,350);
    x=(rand()%200)+200;
    y=(rand()%200)+150;
    putpixel(x,y,i);
   }
  getch();
  closegraph();
 }
