#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
 void main()
  {
   int gd=DETECT,gm,i;
   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
   for(i=1;i<=410;i++)
    {
     cleardevice();
     line(0,200,50+i,200);
     circle(100+i,200,50);
     delay(10);
    }
   getch();
   closegraph();
  }