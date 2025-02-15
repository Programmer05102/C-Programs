#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
 {
  int gd=DETECT,gm;
  clrscr();
  initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
  line(150,150,350,150);
  line(150,150,150,350);
  line(350,150,350,350);
  line(150,350,350,350);
  line(250,150,250,350);
  line(150,250,350,250);
  setfillstyle(1,10);
  floodfill(160,240,15);
  setfillstyle(2,12);
  floodfill(260,240,15);
  setfillstyle(3,14);
  floodfill(160,340,15);
  setfillstyle(4,8);
  floodfill(260,340,15);
  line(350,150,550,150);
  line(350,150,350,350);
  line(550,150,550,350);
  line(350,350,550,350);
  line(450,150,450,350);
  line(350,250,550,250);
  setfillstyle(5,6);
  floodfill(390,240,15);
  setfillstyle(6,4);
  floodfill(490,240,15);
  setfillstyle(7,2);
  floodfill(390,340,15);
  setfillstyle(9,13);
  floodfill(490,340,15);
  circle(350,250,40);
  setfillstyle(8,4);
  fillellipse(350,250,40,40);



  getch();
  closegraph();

 }