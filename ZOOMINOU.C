#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
 void main()
  {
   int gd=DETECT,gm,x=320,y=240,x2=320,y2=240,r1=10,r2=160,i;
   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
   for(i=1;i<=150;i++)
    {
     cleardevice();
     circle(x,y,r1+i);
     setfillstyle(1,4);
     floodfill(320,240,15);
     delay(50);
    }
   for(i=1;i<=150;i++)
    {
     cleardevice();
     circle(x2,y2,r2-i);
     setfillstyle(1,12);
     floodfill(320,240,15);
     delay(50);
    }
   getch();
   closegraph();
  }

