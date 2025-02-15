#include<stdio.h>
#include<conio.h>
#include<graphics.h>
 void mycircle();
 void main()
  {
   mycircle();
   getch();
  }
 void mycircle()
  {
   int gd=DETECT,gm,x=50,y=240,r=50,n,i;
   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
   printf("Enter Number of Circle you want to Draw : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
    {
     circle(x,y,r);
     setfillstyle(1,i);
     floodfill(x,y,15);
     x+=100;
    }
   }