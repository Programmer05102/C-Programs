#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
 {
  int gd=DETECT,gm;
  float x,y;
  char op;
  initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");
  rectangle(200,50,410,410);  //body//
  rectangle(210,65,400,130);  //screen//
  rectangle(210,170,250,200); //button 1//
  settextstyle(1,0,1);
  outtextxy(225,175,"C");
  rectangle(260,170,300,200); //button 2//
  settextstyle(1,0,1);
  outtextxy(275,175,"/");
  rectangle(310,170,350,200); //button 3//
  settextstyle(1,0,1);
  outtextxy(325,175,"*");
  rectangle(360,170,400,200); //button 4//
  settextstyle(1,0,1);
  outtextxy(365,175,"DEL");
  rectangle(210,220,250,250); //button 5//
  settextstyle(1,0,1);
  outtextxy(225,225,"7");
  rectangle(260,220,300,250); //button 6//
  settextstyle(1,0,1);
  outtextxy(275,225,"8");
  rectangle(310,220,350,250); //button 7//
  settextstyle(1,0,1);
  outtextxy(325,225,"9");
  rectangle(360,220,400,250); //button 8//
  settextstyle(1,0,1);
  outtextxy(375,225,"-");
  rectangle(210,270,250,300); //button 9//
  settextstyle(1,0,1);
  outtextxy(225,275,"4");
  rectangle(260,270,300,300); //button 10//
  settextstyle(1,0,1);
  outtextxy(275,275,"5");
  rectangle(310,270,350,300); //button 11//
  settextstyle(1,0,1);
  outtextxy(325,275,"6");
  rectangle(360,270,400,300); //button 12//
  settextstyle(1,0,1);
  outtextxy(375,275,"+");
  rectangle(210,320,250,350); //button 13//
  settextstyle(1,0,1);
  outtextxy(225,325,"1");
  rectangle(260,320,300,350); //button 14//
  settextstyle(1,0,1);
  outtextxy(275,325,"2");
  rectangle(310,320,350,350); //button 15//
  settextstyle(1,0,1);
  outtextxy(325,325,"3");
  rectangle(360,320,400,400); //button 16//
  settextstyle(1,0,1);
  outtextxy(375,350,"=");
  rectangle(210,370,250,400); //button 17//
  settextstyle(1,0,1);
  outtextxy(225,375,"%");
  rectangle(260,370,300,400); //button 18//
  settextstyle(1,0,1);
  outtextxy(275,375,"0");
  rectangle(310,370,350,400); //button 19//
  settextstyle(1,0,1);
  outtextxy(325,375,".");
  gotoxy(29,7);
  op=getche();
  if(op=='!')
  {
  goto sin;
  }
  if(op=='@')
  {
   goto cos;
  }
  gotoxy(28,6);
  scanf("%f",&x);
  gotoxy(28,8);
  scanf("%f",&y);
  switch(op)
   {
    case'+':
    gotoxy(44,8);
    printf("%.2f",x+y);
    break;
    case'-':
    gotoxy(44,8);
    printf("%.2f",x-y);
    break;
    case'*':
    gotoxy(44,8);
    printf("%.2f",x*y);
    break;
    case'/':
    gotoxy(44,8);
    printf("%.2f",x/y);
    break;
    case'%':
    gotoxy(44,8);
    printf("%.2f",x*(y/100));
    break;
    case'!':
    sin:
    gotoxy(28,6);
    scanf("%f",&x);
    gotoxy(44,8);
    printf("%.2f",sin(x));
    break;
    case'@':
    cos:
    gotoxy(28,6);
    scanf("%f",&x);
    gotoxy(44,8);
    printf("%.2f",cos(x));
    break;
   }
  getch();
  closegraph();
  }