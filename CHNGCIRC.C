#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
 void main()
  {
   int gd=DETECT,gm,clr;
   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

   printf("Press \"1\" to make the circle Red\n");
   printf("Press \"2\" to make the circle Green\n");
   printf("Press \"3\" to make the circle Blue\n");
   circle(320,240,100);
   top:
   clr=getche();
   switch(clr)
    {
     case'1':
      {
       printf("You pressed 1\n");
       //delay(500);
       setfillstyle(1,4);
       floodfill(320,240,15);
       goto top;
      }
     case'2':
      {
       printf("You pressed 2\n");
       //delay(500);
       setfillstyle(1,2);
       floodfill(320,240,15);
       goto top;
      }
     case'3':
      {
       printf("You pressed 3\n");
       //delay(500);
       setfillstyle(1,1);
       floodfill(320,240,15);
       goto top;
      }
     default:
     printf("Invalid Input");
     delay(500);
     goto end;
     end:
     getch();
     closegraph();
    }
    }			     //colors