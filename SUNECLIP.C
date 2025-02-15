#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
 void main()
  {
   int gd=DETECT,gm,i;
   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
   for(i=1;i<=400;i++)
    {
     cleardevice();
     setfillstyle(1,14);
     circle(500,100,70);
     floodfill(500,100,15);

     setfillstyle(1,0);
     circle(100+i,100,70);
     floodfill(100+i,100,15);
    }
   getch();
   closegraph();
  }

