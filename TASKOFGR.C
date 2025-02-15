#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
 {
  int gd=DETECT, gm;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  line(200,350, 420,350);
  line(310,150, 200,350);
  line(310,150, 420,350);
  line(200,210, 420,210);
  line(310,400, 200,210);
  line(310,400, 420,210);
  getch();
  closegraph();
 }