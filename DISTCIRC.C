#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void distcircle();
void main()
 {
  clrscr();
  distcircle();
 }
void distcircle()
 {
   int gd=DETECT,gm,x1=250,x2=400,y1=200,y2=200,r1=50,r2=50,a;
   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
   cleardevice();
   circle(x1,y1,r1);
   circle(x2,y2,r2);
   a=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
   if(pow(x2-x1,2)==0)
    {
     printf("Distance B/W Circle Is %d w.r.t Y-Axis",a);
    }
   else
    {
     printf("Distance B/W Circle Is %d w.r.t X-Axis",a);
    }

   getch();
   closegraph();
 }