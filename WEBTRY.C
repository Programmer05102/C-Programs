#include<stdio.h>
#include<conio.h>
#include<graphics.h>
 void main()
 {
  int gd=DETECT,gm;
  initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
  cleardevice();
  rectangle(0,0,getmaxx(),55);
  setfillstyle(1,BLACK);
  floodfill(10,50,15);
  setcolor(RED);
  settextstyle(3,0,4);
  outtextxy(10,5,"Furnace All");
  setcolor(15);
  settextstyle(3,0,2);
  outtextxy(210,25,"Home");
  settextstyle(3,0,2);
  outtextxy(280,25,"About us");
  settextstyle(3,0,2);
  outtextxy(390,25,"Products");
  settextstyle(3,0,2);
  outtextxy(500,25,"Contact");
  rectangle(0,60,getmaxx(),170);
  setfillstyle(1,RED);
  floodfill(10,65,15);
  settextstyle(4,0,7);
  setcolor(0);
  outtextxy(10,65,"Burners");
  setcolor(15);
  rectangle(0,175,getmaxx(),getmaxy()-60);
  line(0,235,getmaxx(),235);
  setcolor(RED);
  settextstyle(3,0,5);
  outtextxy(10,180,"Welcome to Furnace All");
  rectangle(0,425,getmaxx(),getmaxy());

  getch();
  closegraph();
 }