#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
 {
  int gd=DETECT, gm;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

  setcolor(10);
  line(200,350, 420,350);
  setcolor(1);
  line(170,300, 450,300);
  line(172,302, 448,302);
  line(174,304, 446,304);
  line(176,306, 445,306);
  setcolor(2);
  line(170,300, 200,350);
  setcolor(3);
  line(450,300, 420,350);
  setcolor(4);
  line(175,310, 443,310);
  setcolor(5);
  line(182,320, 439,320);
  setcolor(6);
  line(187,330, 433,330);
  setcolor(7);
  line(194,340, 427,340);
  setcolor(8);
  line(310,175, 310,300);
  setcolor(9);
  line(310,175, 200,300);


  getch();

  closegraph();

 }