#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
 {
  int gd=DETECT,gm,i,x=108,y=100;
  initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
  for(i=1;i<=393;i++)
   {
    cleardevice();
    rectangle(105,100,308,300);
    rectangle(100,95,505,305);
    rectangle(x,y,308,300);
    rectangle(300,100,500,300);
    x++;
    delay(10);
   }
  setcolor(8);
  outtextxy(115,157,"Hisham Ahmed");
  setcolor(10);
  outtextxy(108,222,"Programming Fundamentals");
  setcolor(14);
  outtextxy(340,157, "1-A");
  setcolor(11);
  outtextxy(340,222, "BSCS");
   getch();
   closegraph();
  }