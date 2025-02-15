#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
 {
  int gd=DETECT,gm,x;
  initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
  outtextxy(250,220,"Loading...");
  rectangle(249,199,400,211);
  for(x=0;x<150;x++)
   {
    setcolor(3);
    rectangle(250,200,250+x,210);
    delay(100);
   }
  //rectangle(200,180,400,380);
  //rectangle(210,190,290,270);
  //rectangle(310,190,390,270);
  //rectangle(210,290,290,370);
  //rectangle(310,290,390,370);
  //setfillstyle(1,14);
  //floodfill(220,260,15);
  //setfillstyle(1,2);
  //floodfill(320,260,15);
  //setfillstyle(1,1);
  //floodfill(220,360,15);
  //setfillstyle(1,4);
  //floodfill(320,360,15);
  getch();
  closegraph();
  }
