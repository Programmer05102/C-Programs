#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
void main()
 {
  int gd=DETECT,gm,rnum[3][3],r2[4][4],r3[5][5],x,ch,i,j,k=13,n,scr=0,point=0;
  char name[25],yn,a;
  initgraph(&gd, &gm, "C:/TURBOC3/BGI");
  top:
  cleardevice();
  setfillstyle(1,GREEN);
  floodfill(100,300,15);
  rectangle(0,0,getmaxx(),getmaxy());
  setcolor(0);
  settextstyle(1,0,8);
  outtextxy(160,50,"Welcome");
  settextstyle(1,0,4);
  outtextxy(175,210,"Hit,Count And Win");
  settextstyle(1,0,5);
  outtextxy(70,330,"Press Enter To Continue");
  scanf("%c",&a);
  cleardevice();
  while(a=='\r')
  rectangle(150,150,470,261);
  for(x=0;x<320;x++)
   {
    setcolor(3);
    rectangle(150,150,150+x,260);
    delay(10);
    setcolor(rand()%15);
    outtextxy(250,270,"Loading...");
   }
  cleardevice();
  printf("\nEnter Your Name : ");
  gets(name);
  top1:
  cleardevice();
  printf("\n\t\t\t LEVELS");
  printf("\n\t\t\t ------");
  printf("\n\n 1.Simple ");
  printf("\n 2.Medium ");
  printf("\n 3.Hard ");
  printf("\n\n Enter Your Choice : ");
  scanf("%d",&ch);
  cleardevice();
  switch(ch)
   {
    case 1:
     {
      if(ch==1)
       {
	FILE *alpha;
	alpha=fopen("playerscr.txt","a+");
	fprintf(alpha,"\n\t\tSimple");
	gotoxy(25,10);
	printf("In This Level You Have To Score 100");
	srand(time(NULL));
	for(i=0;i<=2;i++)
	{
	 gotoxy(25,k);
	 for(j=0;j<=2;j++)
	{
	 rnum[i][j]=rand()%100+1;
	 //printf("%d\t\t",rnum[i][j]);
	}
	printf("\n");
	k++;
	}
	rectangle(180,180,480,250);
	line(280,180,280,250);
	line(380,180,380,250);
	line(180,205,480,205);
	line(180,223,480,223);
	//setfillstyle(1,0);
	//floodfill(181,249,1);
	gotoxy(1,2);
	printf("Enter Your First Try : ");
	scanf("%d",&n);
	if(rnum[0][0]==n)
	 {
	  gotoxy(25,13);
	  printf("%d",n);
	  scr+=n;
	  if(scr!=100)
	  goto s1;
	  if(scr==100)
	  goto round2;
	 }
	else if(rnum[0][1]==n)
	{
	 gotoxy(40,13);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=100)
	 goto s1;
	 if(scr==100)
	 goto round2;
	}
	else if(rnum[0][2]==n)
	{
	 gotoxy(55,13);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=100)
	 goto s1;
	 if(scr==100)
	 goto round2;
	}
	else if(rnum[1][0]==n)
	{
	 gotoxy(25,14);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=100)
	 goto s1;
	 if(scr==100)
	 goto round2;
	}
	else if(rnum[1][1]==n)
	{
	 gotoxy(40,14);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=100)
	 goto s1;
	 if(scr==100)
	 goto round2;
	}
	else if(rnum[1][2]==n)
	{
	 gotoxy(55,14);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=100)
	 goto s1;
	 if(scr==100)
	 goto round2;
	}
	else if(rnum[2][0]==n)
	{
	 gotoxy(25,15);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=100)
	 goto s1;
	 if(scr==100)
	 goto round2;
	}
	else if(rnum[2][1]==n)
	{
	 gotoxy(40,15);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=100)
	 goto s1;
	 if(scr==100)
	 goto round2;
	}
	else if(rnum[2][2]==n)
	{
	 gotoxy(55,15);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=100)
	 goto s1;
	 if(scr==100)
	 goto round2;
	}
	else
	{
	 gotoxy(1,3);
	 printf("Oops! Try Again");
	 s1:
	 gotoxy(1,4);
	 printf("Enter Your Second Try : ");
	 scanf("%d",&n);
	}
	 if(rnum[0][0]==n)
	 {
	  gotoxy(25,13);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=100)
	  goto round2;
	  else
	   goto t1;
	 }
	 else if(rnum[0][1]==n)
	 {
	  gotoxy(40,13);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=100)
	   goto round2;
	  else
	   goto t1;
	 }
	 else if(rnum[0][2]==n)
	 {
	  gotoxy(55,13);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=100)
	   goto round2;
	  else
	   goto t1;
	 }
	 else if(rnum[1][0]==n)
	 {
	  gotoxy(25,14);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=100)
	  goto round2;
	  else
	  goto t1;
	 }
	 else if(rnum[1][1]==n)
	 {
	  gotoxy(40,14);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=100)
	   goto round2;
	  else
	   goto t1;
	 }
	 else if(rnum[1][2]==n)
	{
	  gotoxy(55,14);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=100)
	   goto round2;
	  else
	   goto t1;
	 }
	 else if(rnum[2][0]==n)
	 {
	  gotoxy(25,15);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=100)
	  goto round2;
	  else
	   goto t1;
	 }
	 else if(rnum[2][1]==n)
	 {
	  gotoxy(40,15);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=100)
	   goto round2;
	  else
	   goto t1;
	 }
	 else if(rnum[2][2]==n)
	 {
	  gotoxy(55,15);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=100)
	   goto round2;
	  else
	   goto t1;
	 }
	 else
	 {
	  gotoxy(1,5);
	  printf("Oops! Try Again");
	  t1:
	  gotoxy(1,6);
	  printf("Enter Your Third Try : ");
	  scanf("%d",&n);
	 }
	 if(rnum[0][0]==n)
	 {
	  gotoxy(25,13);
	  printf("%d",n);
	  scr+=n;
	 }
	 else if(rnum[0][1]==n)
	{
	gotoxy(40,13);
	printf("%d",n);
	scr+=n;
       }
       else if(rnum[0][2]==n)
       {
	gotoxy(55,13);
	printf("%d",n);
	scr+=n;
       }
       else if(rnum[1][0]==n)
       {
	gotoxy(25,14);
	printf("%d",n);
	scr+=n;
       }
       else if(rnum[1][1]==n)
       {
	gotoxy(40,14);
	printf("%d",n);
	scr+=n;
       }
       else if(rnum[1][2]==n)
       {
	gotoxy(55,14);
	printf("%d",n);
	scr+=n;
       }
       else if(rnum[2][0]==n)
       {
	gotoxy(25,15);
	printf("%d",n);
	scr+=n;
       }
       else if(rnum[2][1]==n)
       {
	gotoxy(40,15);
	printf("%d",n);
	scr+=n;
       }
       else if(rnum[2][2]==n)
       {
	gotoxy(55,15);
	printf("%d",n);
	scr+=n;
       }
       if(scr>=100)
       goto round2;
       else
       {
       gotoxy(1,7);
       printf("Oops! You Lost");
       goto End1;
       }
      round2:
      cleardevice();
      point+=1;
      scr=0;
      srand(time(NULL));
      for(i=0;i<=3;i++)
      {
       gotoxy(20,k);
       for(j=0;j<=3;j++)
       {
	r2[i][j]=rand()%100+1;
	//printf("%d\t\t",r2[i][j]);
       }
       printf("\n");
       k++;
      }
      rectangle(130,190,540,260);
      line(200,190,200,260);
      line(300,190,300,260);
      line(420,190,420,260);
      line(130,205,540,205);
      line(130,223,540,223);
      line(130,239,540,239);
      //setfillstyle(1,0);
      //floodfill(181,249,1);
      gotoxy(1,2);
      printf("Enter Your First Try : ");
      scanf("%d",&n);
      if(r2[0][0]==n)
       {
	gotoxy(20,13);
	printf("%d",n);
	scr+=n;
	if(scr!=100)
	goto s2;
	if(scr==100)
	goto round3;
       }
      else if(r2[0][1]==n)
      {
       gotoxy(35,13);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s2;
       if(scr==100)
       goto round3;
      }
      else if(r2[0][2]==n)
      {
       gotoxy(50,13);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s2;
       if(scr==100)
       goto round3;
      }
      else if(r2[0][3]==n)
      {
       gotoxy(65,13);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s2;
       if(scr==100)
       goto round3;
      }
      else if(r2[1][0]==n)
      {
       gotoxy(20,14);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s2;
       if(scr==100)
       goto round3;
      }
      else if(r2[1][1]==n)
      {
       gotoxy(35,14);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s2;
       if(scr==100)
       goto round3;
      }
      else if(r2[1][2]==n)
      {
       gotoxy(50,14);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s2;
       if(scr==100)
       goto round3;
      }
       else if(r2[1][3]==n)
      {
       gotoxy(65,14);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s2;
       if(scr==100)
       goto round3;
      }
      else if(r2[2][0]==n)
      {
       gotoxy(20,15);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s2;
       if(scr==100)
       goto round3;
      }
      else if(r2[2][1]==n)
      {
       gotoxy(35,15);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s2;
       if(scr==100)
       goto round3;
      }
       else if(r2[2][2]==n)
      {
       gotoxy(50,15);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s2;
       if(scr==100)
       goto round3;
      }
       else if(r2[2][3]==n)
      {
       gotoxy(65,15);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
	goto s2;
       if(scr==100)
	goto round3;
      }
      else if(r2[3][0]==n)
      {
       gotoxy(20,16);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s2;
       if(scr==100)
	goto round3;
      }
      else if(r2[3][1]==n)
      {
       gotoxy(35,16);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s2;
       if(scr==100)
	goto round3;
      }
      else if(r2[3][2]==n)
      {
       gotoxy(50,16);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s2;
       if(scr==100)
	goto round3;
      }
       else if(r2[3][3]==n)
      {
       gotoxy(65,16);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s2;
      }
       if(scr==100)
	goto round3;
      else
      {
       gotoxy(1,3);
       printf("Oops! Try Again");
       s2:
       gotoxy(1,4);
       printf("Enter Your Second Try : ");
       scanf("%d",&n);
      }
       if(r2[0][0]==n)
       {
	gotoxy(20,13);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto round3;
	else
	 goto t2;
       }
       else if(r2[0][1]==n)
       {
	gotoxy(35,13);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto round3;
	else
	 goto t2;
       }
       else if(r2[0][2]==n)
       {
	gotoxy(50,13);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto round3;
	else
	 goto t2;
       }
       else if(r2[0][3]==n)
       {
	gotoxy(65,13);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto round3;
	else
	 goto t2;
       }
       else if(r2[1][0]==n)
       {
	gotoxy(20,14);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto round3;
	else
	 goto t2;
       }
       else if(r2[1][1]==n)
       {
	gotoxy(35,14);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto round3;
	else
	 goto t2;
       }
       else if(r2[1][2]==n)
       {
	gotoxy(50,14);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto round3;
	else
	 goto t2;
       }
       else if(r2[1][3]==n)
       {
	gotoxy(65,14);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto round3;
	else
	 goto t2;
       }
       else if(r2[2][0]==n)
       {
	gotoxy(20,15);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto round3;
	else
	 goto t2;
       }
       else if(r2[2][1]==n)
       {
	gotoxy(35,15);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto round3;
	else
	 goto t2;
       }
       else if(r2[2][2]==n)
       {
	gotoxy(50,15);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto round3;
	else
	 goto t2;
       }
       else if(r2[2][3]==n)
       {
	gotoxy(65,15);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto round3;
	else
	 goto t2;
       }
       else if(r2[3][0]==n)
       {
	gotoxy(20,16);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto round3;
	else
	 goto t2;
       }
       else if(r2[3][1]==n)
       {
	gotoxy(35,16);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto round3;
	else
	 goto t2;
       }
       else if(r2[3][2]==n)
       {
	gotoxy(50,16);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto round3;
	else
	 goto t2;
       }
       else if(r2[3][3]==n)
       {
	gotoxy(65,16);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto round3;
	else
	 goto t2;
       }
       else
       {
	gotoxy(1,5);
	printf("Oops! Try Again");
	t2:
	gotoxy(1,6);
	printf("Enter Your Third Try : ");
	scanf("%d",&n);
       }
       if(r2[0][0]==n)
       {
	gotoxy(20,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[0][1]==n)
       {
	gotoxy(35,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[0][2]==n)
       {
	gotoxy(50,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[0][3]==n)
       {
	gotoxy(65,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[1][0]==n)
       {
	gotoxy(20,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[1][1]==n)
       {
	gotoxy(35,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[1][2]==n)
       {
	gotoxy(50,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[1][3]==n)
       {
	gotoxy(65,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[2][0]==n)
       {
	gotoxy(20,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[2][1]==n)
       {
	gotoxy(35,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[2][2]==n)
       {
	gotoxy(50,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[2][3]==n)
       {
	gotoxy(65,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[3][0]==n)
       {
	gotoxy(20,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[3][1]==n)
       {
	gotoxy(35,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[3][2]==n)
       {
	gotoxy(50,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[3][3]==n)
       {
	gotoxy(65,16);
	printf("%d",n);
	scr+=n;
       }
       if(scr>=100)
       goto round3;
       else
       gotoxy(1,7);
       printf("Oops! You Lost");
       goto End1;
      round3:
      cleardevice();
      point+=3;
      scr=0;
      srand(time(NULL));
      for(i=0;i<=4;i++)
      {
       gotoxy(20,k);
       for(j=0;j<=4;j++)
       {
	r3[i][j]=rand()%100+1;
	//printf("%d\t",r3[i][j]);
       }
       printf("\n");
       k++;
      }
      rectangle(140,190,410,270);
      line(180,190,180,270);
      line(230,190,230,270);
      line(290,190,290,270);
      line(350,190,350,270);
      line(140,205,410,205);
      line(140,223,410,223);
      line(140,239,410,239);
      line(140,255,410,255);
      //setfillstyle(1,0);
      //floodfill(181,249,1);
      gotoxy(1,2);
      printf("Enter Your First Try : ");
      scanf("%d",&n);
      if(r3[0][0]==n)
       {
	gotoxy(20,13);
	printf("%d",n);
	scr+=n;
	if(scr!=100)
	goto s3;
	if(scr==100)
	goto end1;
       }
      else if(r3[0][1]==n)
      {
       gotoxy(25,13);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s3;
       if(scr==100)
       goto end1;
      }
      else if(r3[0][2]==n)
      {
       gotoxy(30,13);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s3;
       if(scr==100)
       goto end1;
      }
      else if(r3[0][3]==n)
      {
       gotoxy(40,13);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s3;
       if(scr==100)
       goto end1;
      }
      else if(r3[0][4]==n)
      {
       gotoxy(50,13);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s3;
       if(scr==100)
       goto end1;
      }
      else if(r3[1][0]==n)
      {
       gotoxy(20,14);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s3;
       if(scr==100)
       goto end1;
      }
      else if(r3[1][1]==n)
      {
       gotoxy(25,14);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s3;
       if(scr==100)
       goto end1;
      }
      else if(r3[1][2]==n)
      {
       gotoxy(30,14);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s3;
       if(scr==100)
       goto end1;
      }
       else if(r3[1][3]==n)
      {
       gotoxy(40,14);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s3;
       if(scr==100)
       goto end1;
      }
      else if(r3[1][4]==n)
      {
       gotoxy(50,14);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s3;
       if(scr==100)
       goto end1;
      }
      else if(r3[2][0]==n)
      {
       gotoxy(20,15);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s3;
       if(scr==100)
       goto end1;
      }
      else if(r3[2][1]==n)
      {
       gotoxy(25,15);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s3;
       if(scr==100)
       goto end1;
      }
       else if(r3[2][2]==n)
      {
       gotoxy(30,15);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s3;
       if(scr==100)
       goto end1;
      }
       else if(r3[2][3]==n)
      {
       gotoxy(40,15);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
	goto s3;
       if(scr==100)
	goto end1;
      }
      else if(r3[2][4]==n)
      {
       gotoxy(50,15);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
	goto s3;
       if(scr==100)
	goto end1;
      }
      else if(r3[3][0]==n)
      {
       gotoxy(20,16);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s3;
       if(scr==100)
	goto end1;
      }
      else if(r3[3][1]==n)
      {
       gotoxy(25,16);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s3;
       if(scr==100)
	goto end1;
      }
      else if(r3[3][2]==n)
      {
       gotoxy(30,16);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s3;
       if(scr==100)
	goto end1;
      }
       else if(r3[3][3]==n)
      {
       gotoxy(40,16);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s3;
       if(scr==100)
	goto end1;
      }
      else if(r3[3][4]==n)
      {
       gotoxy(50,16);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s3;
       if(scr==100)
	goto end1;
       }
       else if(r3[4][0]==n)
      {
       gotoxy(20,17);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s3;
       if(scr==100)
	goto end1;
      }
      else if(r3[4][1]==n)
      {
       gotoxy(25,17);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s3;
       if(scr==100)
	goto end1;
      }
      else if(r3[4][2]==n)
      {
       gotoxy(30,17);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s3;
       if(scr==100)
	goto end1;
      }
       else if(r3[4][3]==n)
      {
       gotoxy(40,17);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s3;
       if(scr==100)
	goto end1;
      }
      else if(r3[4][4]==n)
      {
       gotoxy(50,17);
       printf("%d",n);
       scr+=n;
       if(scr!=100)
       goto s3;
       if(scr==100)
       {
	goto end1;
       }
       }
      else
      {
       gotoxy(1,3);
       printf("Oops! Try Again");
       s3:
       gotoxy(1,4);
       printf("Enter Your Second Try : ");
       scanf("%d",&n);
      }
       if(r3[0][0]==n)
       {
	gotoxy(20,13);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[0][1]==n)
       {
	gotoxy(25,13);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[0][2]==n)
       {
	gotoxy(30,13);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[0][3]==n)
       {
	gotoxy(40,13);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[0][4]==n)
       {
	gotoxy(50,13);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[1][0]==n)
       {
	gotoxy(20,14);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[1][1]==n)
       {
	gotoxy(25,14);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[1][2]==n)
       {
	gotoxy(30,14);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[1][3]==n)
       {
	gotoxy(40,14);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[1][4]==n)
       {
	gotoxy(50,14);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[2][0]==n)
       {
	gotoxy(20,15);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[2][1]==n)
       {
	gotoxy(25,15);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[2][2]==n)
       {
	gotoxy(30,15);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[2][3]==n)
       {
	gotoxy(40,15);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[2][4]==n)
       {
	gotoxy(50,15);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[3][0]==n)
       {
	gotoxy(20,16);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[3][1]==n)
       {
	gotoxy(25,16);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[3][2]==n)
       {
	gotoxy(30,16);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[3][3]==n)
       {
	gotoxy(40,16);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[3][4]==n)
       {
	gotoxy(50,16);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[4][0]==n)
       {
	gotoxy(20,17);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[4][1]==n)
       {
	gotoxy(25,17);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[4][2]==n)
       {
	gotoxy(30,17);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[4][3]==n)
       {
	gotoxy(40,17);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	 goto end1;
	else
	 goto t3;
       }
       else if(r3[4][4]==n)
       {
	gotoxy(50,17);
	printf("%d",n);
	scr+=n;
	if(scr>=100)
	{
	 goto end1;
	}
	else
	 goto t3;
       }
       else
       {
	gotoxy(1,5);
	printf("Oops! Try Again");
	t3:
	gotoxy(1,6);
	printf("Enter Your Third Try : ");
	scanf("%d",&n);
       }
       if(r3[0][0]==n)
       {
	gotoxy(20,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[0][1]==n)
       {
	gotoxy(25,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[0][2]==n)
       {
	gotoxy(30,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[0][3]==n)
       {
	gotoxy(40,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[0][4]==n)
       {
	gotoxy(50,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[1][0]==n)
       {
	gotoxy(20,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[1][1]==n)
       {
	gotoxy(25,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[1][2]==n)
       {
	gotoxy(30,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[1][3]==n)
       {
	gotoxy(40,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[1][4]==n)
       {
	gotoxy(50,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[2][0]==n)
       {
	gotoxy(20,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[2][1]==n)
       {
	gotoxy(25,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[2][2]==n)
       {
	gotoxy(30,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[2][3]==n)
       {
	gotoxy(40,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[2][4]==n)
       {
	gotoxy(50,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[3][0]==n)
       {
	gotoxy(20,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[3][1]==n)
       {
	gotoxy(25,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[3][2]==n)
       {
	gotoxy(30,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[3][3]==n)
       {
	gotoxy(40,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[3][4]==n)
       {
	gotoxy(50,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[4][0]==n)
       {
	gotoxy(20,17);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[4][1]==n)
       {
	gotoxy(25,17);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[4][2]==n)
       {
	gotoxy(30,17);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[4][3]==n)
       {
	gotoxy(40,17);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[4][4]==n)
       {
	gotoxy(50,17);
	printf("%d",n);
	scr+=n;
       }
       if(scr>=100)
       {
       goto end1;
       }
       else
       gotoxy(1,7);
       printf("Oops! You Lost");
       end1:
       point+=5;
       End1:
       cleardevice();
       gotoxy(1,1);
       if(point==9)
       {
       fprintf(alpha,"\n\t%s : %d",name,point+1);
       }
       else
       {
       fprintf(alpha,"\n\t%s : %d",name,point);
       }
       printf("\n\nDo You Want To Play Again (Y/N) : ");
       yn=getche();
       if((yn == 'Y') || (yn == 'y'))
	{
		   goto top1;
	}
       break;
     }
     fclose("alpha");
    }
     case 2:
     {
      if(ch==2)
       {
	FILE *alpha;
	alpha=fopen("playerscr.txt","a+");
	fprintf(alpha,"\n\t\tMedium");
	gotoxy(25,10);
	printf("In This Level You Have To Score 200");
	srand(time(NULL));
	for(i=0;i<=2;i++)
	{
	 gotoxy(25,k);
	 for(j=0;j<=2;j++)
	{
	 rnum[i][j]=rand()%200+1;
	 //printf("%d\t\t",rnum[i][j]);
	}
	printf("\n");
	k++;
	}
	rectangle(180,180,480,250);
	line(280,180,280,250);
	line(380,180,380,250);
	line(180,205,480,205);
	line(180,223,480,223);
	//setfillstyle(1,0);
	//floodfill(181,249,1);
	gotoxy(1,2);
	printf("Enter Your First Try : ");
	scanf("%d",&n);
	if(rnum[0][0]==n)
	 {
	  gotoxy(25,13);
	  printf("%d",n);
	  scr+=n;
	  if(scr!=200)
	  goto S1;
	  if(scr==200)
	  goto Round2;
	 }
	else if(rnum[0][1]==n)
	{
	 gotoxy(40,13);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=200)
	 goto S1;
	 if(scr==200)
	 goto Round2;
	}
	else if(rnum[0][2]==n)
	{
	 gotoxy(55,13);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=200)
	 goto S1;
	 if(scr==200)
	 goto Round2;
	}
	else if(rnum[1][0]==n)
	{
	 gotoxy(25,14);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=200)
	 goto S1;
	 if(scr==200)
	 goto Round2;
	}
	else if(rnum[1][1]==n)
	{
	 gotoxy(40,14);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=200)
	 goto S1;
	 if(scr==200)
	 goto Round2;
	}
	else if(rnum[1][2]==n)
	{
	 gotoxy(55,14);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=200)
	 goto S1;
	 if(scr==200)
	 goto Round2;
	}
	else if(rnum[2][0]==n)
	{
	 gotoxy(25,15);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=200)
	 goto S1;
	 if(scr==200)
	 goto Round2;
	}
	else if(rnum[2][1]==n)
	{
	 gotoxy(40,15);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=200)
	 goto S1;
	 if(scr==200)
	 goto Round2;
	}
	else if(rnum[2][2]==n)
	{
	 gotoxy(55,15);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=200)
	 goto S1;
	 if(scr==200)
	 goto Round2;
	}
	else
	{
	 gotoxy(1,3);
	 printf("Oops! Try Again");
	 S1:
	 gotoxy(1,4);
	 printf("Enter Your Second Try : ");
	 scanf("%d",&n);
	}
	 if(rnum[0][0]==n)
	 {
	  gotoxy(25,13);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=200)
	  goto Round2;
	  else
	   goto T1;
	 }
	 else if(rnum[0][1]==n)
	 {
	  gotoxy(40,13);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=200)
	   goto Round2;
	  else
	   goto T1;
	 }
	 else if(rnum[0][2]==n)
	 {
	  gotoxy(55,13);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=200)
	   goto Round2;
	  else
	   goto T1;
	 }
	 else if(rnum[1][0]==n)
	 {
	  gotoxy(25,14);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=200)
	  goto Round2;
	  else
	  goto T1;
	 }
	 else if(rnum[1][1]==n)
	 {
	  gotoxy(40,14);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=200)
	   goto Round2;
	  else
	   goto T1;
	 }
	 else if(rnum[1][2]==n)
	{
	  gotoxy(55,14);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=200)
	   goto Round2;
	  else
	   goto T1;
	 }
	 else if(rnum[2][0]==n)
	 {
	  gotoxy(25,15);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=200)
	  goto Round2;
	  else
	   goto T1;
	 }
	 else if(rnum[2][1]==n)
	 {
	  gotoxy(40,15);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=200)
	   goto Round2;
	  else
	   goto T1;
	 }
	 else if(rnum[2][2]==n)
	 {
	  gotoxy(55,15);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=200)
	   goto Round2;
	  else
	   goto T1;
	 }
	 else
	 {
	  gotoxy(1,5);
	  printf("Oops! Try Again");
	  T1:
	  gotoxy(1,6);
	  printf("Enter Your Third Try : ");
	  scanf("%d",&n);
	 }
	 if(rnum[0][0]==n)
	 {
	  gotoxy(25,13);
	  printf("%d",n);
	  scr+=n;
	 }
	 else if(rnum[0][1]==n)
	{
	gotoxy(40,13);
	printf("%d",n);
	scr+=n;
       }
       else if(rnum[0][2]==n)
       {
	gotoxy(55,13);
	printf("%d",n);
	scr+=n;
       }
       else if(rnum[1][0]==n)
       {
	gotoxy(25,14);
	printf("%d",n);
	scr+=n;
       }
       else if(rnum[1][1]==n)
       {
	gotoxy(40,14);
	printf("%d",n);
	scr+=n;
       }
       else if(rnum[1][2]==n)
       {
	gotoxy(55,14);
	printf("%d",n);
	scr+=n;
       }
       else if(rnum[2][0]==n)
       {
	gotoxy(25,15);
	printf("%d",n);
	scr+=n;
       }
       else if(rnum[2][1]==n)
       {
	gotoxy(40,15);
	printf("%d",n);
	scr+=n;
       }
       else if(rnum[2][2]==n)
       {
	gotoxy(55,15);
	printf("%d",n);
	scr+=n;
       }
       if(scr>=200)
       goto Round2;
       else
       {
       gotoxy(1,7);
       printf("Oops! You Lost");
       goto End2;
       }
      Round2:
      cleardevice();
      point+=1;
      scr=0;
      srand(time(NULL));
      for(i=0;i<=3;i++)
      {
       gotoxy(20,k);
       for(j=0;j<=3;j++)
       {
	r2[i][j]=rand()%200+1;
	//printf("%d\t\t",r2[i][j]);
       }
       printf("\n");
       k++;
      }
      rectangle(130,190,540,260);
      line(200,190,200,260);
      line(300,190,300,260);
      line(420,190,420,260);
      line(130,205,540,205);
      line(130,223,540,223);
      line(130,239,540,239);
      //setfillstyle(1,0);
      //floodfill(181,249,1);
      gotoxy(1,2);
      printf("Enter Your First Try : ");
      scanf("%d",&n);
      if(r2[0][0]==n)
       {
	gotoxy(20,13);
	printf("%d",n);
	scr+=n;
	if(scr!=200)
	goto S2;
	if(scr==200)
	goto Round3;
       }
      else if(r2[0][1]==n)
      {
       gotoxy(35,13);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S2;
       if(scr==200)
       goto Round3;
      }
      else if(r2[0][2]==n)
      {
       gotoxy(50,13);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S2;
       if(scr==200)
       goto Round3;
      }
      else if(r2[0][3]==n)
      {
       gotoxy(65,13);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S2;
       if(scr==200)
       goto Round3;
      }
      else if(r2[1][0]==n)
      {
       gotoxy(20,14);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S2;
       if(scr==200)
       goto Round3;
      }
      else if(r2[1][1]==n)
      {
       gotoxy(35,14);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S2;
       if(scr==200)
       goto Round3;
      }
      else if(r2[1][2]==n)
      {
       gotoxy(50,14);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S2;
       if(scr==200)
       goto Round3;
      }
       else if(r2[1][3]==n)
      {
       gotoxy(65,14);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S2;
       if(scr==200)
       goto Round3;
      }
      else if(r2[2][0]==n)
      {
       gotoxy(20,15);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S2;
       if(scr==200)
       goto Round3;
      }
      else if(r2[2][1]==n)
      {
       gotoxy(35,15);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S2;
       if(scr==200)
       goto Round3;
      }
       else if(r2[2][2]==n)
      {
       gotoxy(50,15);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S2;
       if(scr==200)
       goto Round3;
      }
       else if(r2[2][3]==n)
      {
       gotoxy(65,15);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
	goto S2;
       if(scr==200)
	goto Round3;
      }
      else if(r2[3][0]==n)
      {
       gotoxy(20,16);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S2;
       if(scr==200)
	goto Round3;
      }
      else if(r2[3][1]==n)
      {
       gotoxy(35,16);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S2;
       if(scr==200)
	goto Round3;
      }
      else if(r2[3][2]==n)
      {
       gotoxy(50,16);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S2;
       if(scr==200)
	goto Round3;
      }
       else if(r2[3][3]==n)
      {
       gotoxy(65,16);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S2;
      }
       if(scr==200)
	goto Round3;
      else
      {
       gotoxy(1,3);
       printf("Oops! Try Again");
       S2:
       gotoxy(1,4);
       printf("Enter Your Second Try : ");
       scanf("%d",&n);
      }
       if(r2[0][0]==n)
       {
	gotoxy(20,13);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto Round3;
	else
	 goto T2;
       }
       else if(r2[0][1]==n)
       {
	gotoxy(35,13);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto Round3;
	else
	 goto T2;
       }
       else if(r2[0][2]==n)
       {
	gotoxy(50,13);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto Round3;
	else
	 goto T2;
       }
       else if(r2[0][3]==n)
       {
	gotoxy(65,13);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto Round3;
	else
	 goto T2;
       }
       else if(r2[1][0]==n)
       {
	gotoxy(20,14);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto Round3;
	else
	 goto T2;
       }
       else if(r2[1][1]==n)
       {
	gotoxy(35,14);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto Round3;
	else
	 goto T2;
       }
       else if(r2[1][2]==n)
       {
	gotoxy(50,14);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto Round3;
	else
	 goto T2;
       }
       else if(r2[1][3]==n)
       {
	gotoxy(65,14);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto Round3;
	else
	 goto T2;
       }
       else if(r2[2][0]==n)
       {
	gotoxy(20,15);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto Round3;
	else
	 goto T2;
       }
       else if(r2[2][1]==n)
       {
	gotoxy(35,15);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto Round3;
	else
	 goto T2;
       }
       else if(r2[2][2]==n)
       {
	gotoxy(50,15);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto Round3;
	else
	 goto T2;
       }
       else if(r2[2][3]==n)
       {
	gotoxy(65,15);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto round3;
	else
	 goto T2;
       }
       else if(r2[3][0]==n)
       {
	gotoxy(20,16);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto Round3;
	else
	 goto T2;
       }
       else if(r2[3][1]==n)
       {
	gotoxy(35,16);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto Round3;
	else
	 goto T2;
       }
       else if(r2[3][2]==n)
       {
	gotoxy(50,16);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto Round3;
	else
	 goto T2;
       }
       else if(r2[3][3]==n)
       {
	gotoxy(65,16);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto Round3;
	else
	 goto T2;
       }
       else
       {
	gotoxy(1,5);
	printf("Oops! Try Again");
	T2:
	gotoxy(1,6);
	printf("Enter Your Third Try : ");
	scanf("%d",&n);
       }
       if(r2[0][0]==n)
       {
	gotoxy(20,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[0][1]==n)
       {
	gotoxy(35,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[0][2]==n)
       {
	gotoxy(50,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[0][3]==n)
       {
	gotoxy(65,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[1][0]==n)
       {
	gotoxy(20,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[1][1]==n)
       {
	gotoxy(35,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[1][2]==n)
       {
	gotoxy(50,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[1][3]==n)
       {
	gotoxy(65,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[2][0]==n)
       {
	gotoxy(20,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[2][1]==n)
       {
	gotoxy(35,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[2][2]==n)
       {
	gotoxy(50,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[2][3]==n)
       {
	gotoxy(65,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[3][0]==n)
       {
	gotoxy(20,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[3][1]==n)
       {
	gotoxy(35,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[3][2]==n)
       {
	gotoxy(50,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[3][3]==n)
       {
	gotoxy(65,16);
	printf("%d",n);
	scr+=n;
       }
       if(scr>=200)
       goto Round3;
       else
       gotoxy(1,7);
       printf("Oops! You Lost");
       goto End2;
      Round3:
      cleardevice();
      point+=3;
      scr=0;
      srand(time(NULL));
      for(i=0;i<=4;i++)
      {
       gotoxy(20,k);
       for(j=0;j<=4;j++)
       {
	r3[i][j]=rand()%200+1;
	//printf("%d\t",r3[i][j]);
       }
       printf("\n");
       k++;
      }
      rectangle(140,190,410,270);
      line(180,190,180,270);
      line(230,190,230,270);
      line(290,190,290,270);
      line(350,190,350,270);
      line(140,205,410,205);
      line(140,223,410,223);
      line(140,239,410,239);
      line(140,255,410,255);
      //setfillstyle(1,0);
      //floodfill(181,249,1);
      gotoxy(1,2);
      printf("Enter Your First Try : ");
      scanf("%d",&n);
      if(r3[0][0]==n)
       {
	gotoxy(20,13);
	printf("%d",n);
	scr+=n;
	if(scr!=200)
	goto S3;
	if(scr==200)
	goto end2;
       }
      else if(r3[0][1]==n)
      {
       gotoxy(25,13);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S3;
       if(scr==200)
       goto end2;
      }
      else if(r3[0][2]==n)
      {
       gotoxy(30,13);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S3;
       if(scr==200)
       goto end2;
      }
      else if(r3[0][3]==n)
      {
       gotoxy(40,13);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S3;
       if(scr==200)
       goto end2;
      }
      else if(r3[0][4]==n)
      {
       gotoxy(50,13);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S3;
       if(scr==200)
       goto end2;
      }
      else if(r3[1][0]==n)
      {
       gotoxy(20,14);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S3;
       if(scr==200)
       goto end2;
      }
      else if(r3[1][1]==n)
      {
       gotoxy(25,14);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S3;
       if(scr==200)
       goto end2;
      }
      else if(r3[1][2]==n)
      {
       gotoxy(30,14);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S3;
       if(scr==200)
       goto end2;
      }
       else if(r3[1][3]==n)
      {
       gotoxy(40,14);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S3;
       if(scr==200)
       goto end2;
      }
      else if(r3[1][4]==n)
      {
       gotoxy(50,14);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S3;
       if(scr==200)
       goto end2;
      }
      else if(r3[2][0]==n)
      {
       gotoxy(20,15);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S3;
       if(scr==200)
       goto end2;
      }
      else if(r3[2][1]==n)
      {
       gotoxy(25,15);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S3;
       if(scr==200)
       goto end2;
      }
       else if(r3[2][2]==n)
      {
       gotoxy(30,15);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S3;
       if(scr==200)
       goto end2;
      }
       else if(r3[2][3]==n)
      {
       gotoxy(40,15);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
	goto S3;
       if(scr==200)
	goto end2;
      }
      else if(r3[2][4]==n)
      {
       gotoxy(50,15);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
	goto S3;
       if(scr==200)
	goto end2;
      }
      else if(r3[3][0]==n)
      {
       gotoxy(20,16);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S3;
       if(scr==200)
	goto end2;
      }
      else if(r3[3][1]==n)
      {
       gotoxy(25,16);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S3;
       if(scr==200)
	goto end2;
      }
      else if(r3[3][2]==n)
      {
       gotoxy(30,16);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S3;
       if(scr==200)
	goto end2;
      }
       else if(r3[3][3]==n)
      {
       gotoxy(40,16);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S3;
       if(scr==200)
	goto end2;
      }
      else if(r3[3][4]==n)
      {
       gotoxy(50,16);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S3;
       if(scr==200)
	goto end2;
       }
       else if(r3[4][0]==n)
      {
       gotoxy(20,17);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S3;
       if(scr==200)
	goto end2;
      }
      else if(r3[4][1]==n)
      {
       gotoxy(25,17);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S3;
       if(scr==200)
	goto end2;
      }
      else if(r3[4][2]==n)
      {
       gotoxy(30,17);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S3;
       if(scr==200)
	goto end2;
      }
       else if(r3[4][3]==n)
      {
       gotoxy(40,17);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S3;
       if(scr==200)
	goto end2;
      }
      else if(r3[4][4]==n)
      {
       gotoxy(50,17);
       printf("%d",n);
       scr+=n;
       if(scr!=200)
       goto S3;
       if(scr==200)
       {
	goto end2;
       }
       }
      else
      {
       gotoxy(1,3);
       printf("Oops! Try Again");
       S3:
       gotoxy(1,4);
       printf("Enter Your Second Try : ");
       scanf("%d",&n);
      }
       if(r3[0][0]==n)
       {
	gotoxy(20,13);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end2;
	else
	 goto T3;
       }
       else if(r3[0][1]==n)
       {
	gotoxy(25,13);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end2;
	else
	 goto T3;
       }
       else if(r3[0][2]==n)
       {
	gotoxy(30,13);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end2;
	else
	 goto T3;
       }
       else if(r3[0][3]==n)
       {
	gotoxy(40,13);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end2;
	else
	 goto T3;
       }
       else if(r3[0][4]==n)
       {
	gotoxy(50,13);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end2;
	else
	 goto T3;
       }
       else if(r3[1][0]==n)
       {
	gotoxy(20,14);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end2;
	else
	 goto T3;
       }
       else if(r3[1][1]==n)
       {
	gotoxy(25,14);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end2;
	else
	 goto T3;
       }
       else if(r3[1][2]==n)
       {
	gotoxy(30,14);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end2;
	else
	 goto T3;
       }
       else if(r3[1][3]==n)
       {
	gotoxy(40,14);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end2;
	else
	 goto T3;
       }
       else if(r3[1][4]==n)
       {
	gotoxy(50,14);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end2;
	else
	 goto T3;
       }
       else if(r3[2][0]==n)
       {
	gotoxy(20,15);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end2;
	else
	 goto T3;
       }
       else if(r3[2][1]==n)
       {
	gotoxy(25,15);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end2;
	else
	 goto T3;
       }
       else if(r3[2][2]==n)
       {
	gotoxy(30,15);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end1;
	else
	 goto T3;
       }
       else if(r3[2][3]==n)
       {
	gotoxy(40,15);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end1;
	else
	 goto T3;
       }
       else if(r3[2][4]==n)
       {
	gotoxy(50,15);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end2;
	else
	 goto T3;
       }
       else if(r3[3][0]==n)
       {
	gotoxy(20,16);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end1;
	else
	 goto T3;
       }
       else if(r3[3][1]==n)
       {
	gotoxy(25,16);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end2;
	else
	 goto T3;
       }
       else if(r3[3][2]==n)
       {
	gotoxy(30,16);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end2;
	else
	 goto T3;
       }
       else if(r3[3][3]==n)
       {
	gotoxy(40,16);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end2;
	else
	 goto T3;
       }
       else if(r3[3][4]==n)
       {
	gotoxy(50,16);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end2;
	else
	 goto T3;
       }
       else if(r3[4][0]==n)
       {
	gotoxy(20,17);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end2;
	else
	 goto T3;
       }
       else if(r3[4][1]==n)
       {
	gotoxy(25,17);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end2;
	else
	 goto T3;
       }
       else if(r3[4][2]==n)
       {
	gotoxy(30,17);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end2;
	else
	 goto T3;
       }
       else if(r3[4][3]==n)
       {
	gotoxy(40,17);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	 goto end2;
	else
	 goto T3;
       }
       else if(r3[4][4]==n)
       {
	gotoxy(50,17);
	printf("%d",n);
	scr+=n;
	if(scr>=200)
	{
	 goto end2;
	}
	else
	 goto T3;
       }
       else
       {
	gotoxy(1,5);
	printf("Oops! Try Again");
	T3:
	gotoxy(1,6);
	printf("Enter Your Third Try : ");
	scanf("%d",&n);
       }
       if(r3[0][0]==n)
       {
	gotoxy(20,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[0][1]==n)
       {
	gotoxy(25,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[0][2]==n)
       {
	gotoxy(30,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[0][3]==n)
       {
	gotoxy(40,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[0][4]==n)
       {
	gotoxy(50,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[1][0]==n)
       {
	gotoxy(20,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[1][1]==n)
       {
	gotoxy(25,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[1][2]==n)
       {
	gotoxy(30,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[1][3]==n)
       {
	gotoxy(40,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[1][4]==n)
       {
	gotoxy(50,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[2][0]==n)
       {
	gotoxy(20,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[2][1]==n)
       {
	gotoxy(25,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[2][2]==n)
       {
	gotoxy(30,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[2][3]==n)
       {
	gotoxy(40,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[2][4]==n)
       {
	gotoxy(50,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[3][0]==n)
       {
	gotoxy(20,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[3][1]==n)
       {
	gotoxy(25,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[3][2]==n)
       {
	gotoxy(30,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[3][3]==n)
       {
	gotoxy(40,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[3][4]==n)
       {
	gotoxy(50,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[4][0]==n)
       {
	gotoxy(20,17);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[4][1]==n)
       {
	gotoxy(25,17);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[4][2]==n)
       {
	gotoxy(30,17);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[4][3]==n)
       {
	gotoxy(40,17);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[4][4]==n)
       {
	gotoxy(50,17);
	printf("%d",n);
	scr+=n;
       }
       if(scr>=200)
       {
       goto end2;
       }
       else
       gotoxy(1,7);
       printf("Oops! You Lost");
       end2:
       point+=5;
       End2:
       cleardevice();
       gotoxy(1,1);
       if(point==9)
       {
       fprintf(alpha,"\n\t%s : %d",name,point+1);
       }
       else
       {
       fprintf(alpha,"\n\t%s : %d",name,point);
       }
       printf("\n\nDo You Want To Play Again (Y/N) : ");
       yn=getche();
       if((yn == 'Y') || (yn == 'y'))
	{
		   goto top;
	}
       break;
      }
     fclose("alpha");
     }
     case 3:                             \
     {
      if(ch==3)
       {
	FILE *alpha;
	alpha=fopen("playerscr.txt","a+");
	fprintf(alpha,"\n\t\tHard");
	gotoxy(25,10);
	printf("In This Level You Have To Score 300");
	srand(time(NULL));
	for(i=0;i<=2;i++)
	{
	 gotoxy(25,k);
	 for(j=0;j<=2;j++)
	{
	 rnum[i][j]=rand()%300+1;
	 //printf("%d\t\t",rnum[i][j]);
	}
	printf("\n");
	k++;
	}
	rectangle(180,180,480,250);
	line(280,180,280,250);
	line(380,180,380,250);
	line(180,205,480,205);
	line(180,223,480,223);
	//setfillstyle(1,0);
	//floodfill(181,249,1);
	gotoxy(1,2);
	printf("Enter Your First Try : ");
	scanf("%d",&n);
	if(rnum[0][0]==n)
	 {
	  gotoxy(25,13);
	  printf("%d",n);
	  scr+=n;
	  if(scr!=300)
	  goto S4;
	  if(scr==300)
	  goto Round4;
	 }
	else if(rnum[0][1]==n)
	{
	 gotoxy(40,13);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=300)
	 goto S4;
	 if(scr==300)
	 goto Round4;
	}
	else if(rnum[0][2]==n)
	{
	 gotoxy(55,13);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=300)
	 goto S4;
	 if(scr==300)
	 goto Round4;
	}
	else if(rnum[1][0]==n)
	{
	 gotoxy(25,14);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=300)
	 goto S4;
	 if(scr==300)
	 goto Round4;
	}
	else if(rnum[1][1]==n)
	{
	 gotoxy(40,14);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=300)
	 goto S4;
	 if(scr==300)
	 goto Round4;
	}
	else if(rnum[1][2]==n)
	{
	 gotoxy(55,14);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=300)
	 goto S4;
	 if(scr==300)
	 goto Round4;
	}
	else if(rnum[2][0]==n)
	{
	 gotoxy(25,15);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=300)
	 goto S4;
	 if(scr==300)
	 goto Round4;
	}
	else if(rnum[2][1]==n)
	{
	 gotoxy(40,15);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=300)
	 goto S4;
	 if(scr==300)
	 goto Round4;
	}
	else if(rnum[2][2]==n)
	{
	 gotoxy(55,15);
	 printf("%d",n);
	 scr+=n;
	 if(scr!=300)
	 goto S4;
	 if(scr==300)
	 goto Round4;
	}
	else
	{
	 gotoxy(1,3);
	 printf("Oops! Try Again");
	 S4:
	 gotoxy(1,4);
	 printf("Enter Your Second Try : ");
	 scanf("%d",&n);
	}
	 if(rnum[0][0]==n)
	 {
	  gotoxy(25,13);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=300)
	  goto Round4;
	  else
	   goto T4;
	 }
	 else if(rnum[0][1]==n)
	 {
	  gotoxy(40,13);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=300)
	   goto Round4;
	  else
	   goto T4;
	 }
	 else if(rnum[0][2]==n)
	 {
	  gotoxy(55,13);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=300)
	   goto Round4;
	  else
	   goto T4;
	 }
	 else if(rnum[1][0]==n)
	 {
	  gotoxy(25,14);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=300)
	  goto Round4;
	  else
	  goto T4;
	 }
	 else if(rnum[1][1]==n)
	 {
	  gotoxy(40,14);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=300)
	   goto Round4;
	  else
	   goto T4;
	 }
	 else if(rnum[1][2]==n)
	{
	  gotoxy(55,14);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=300)
	   goto Round4;
	  else
	   goto T4;
	 }
	 else if(rnum[2][0]==n)
	 {
	  gotoxy(25,15);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=300)
	  goto Round4;
	  else
	   goto T4;
	 }
	 else if(rnum[2][1]==n)
	 {
	  gotoxy(40,15);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=300)
	   goto Round4;
	  else
	   goto T4;
	 }
	 else if(rnum[2][2]==n)
	 {
	  gotoxy(55,15);
	  printf("%d",n);
	  scr+=n;
	  if(scr>=300)
	   goto Round4;
	  else
	   goto T4;
	 }
	 else
	 {
	  gotoxy(1,5);
	  printf("Oops! Try Again");
	  T4:
	  gotoxy(1,6);
	  printf("Enter Your Third Try : ");
	  scanf("%d",&n);
	 }
	 if(rnum[0][0]==n)
	 {
	  gotoxy(25,13);
	  printf("%d",n);
	  scr+=n;
	 }
	 else if(rnum[0][1]==n)
	{
	gotoxy(40,13);
	printf("%d",n);
	scr+=n;
       }
       else if(rnum[0][2]==n)
       {
	gotoxy(55,13);
	printf("%d",n);
	scr+=n;
       }
       else if(rnum[1][0]==n)
       {
	gotoxy(25,14);
	printf("%d",n);
	scr+=n;
       }
       else if(rnum[1][1]==n)
       {
	gotoxy(40,14);
	printf("%d",n);
	scr+=n;
       }
       else if(rnum[1][2]==n)
       {
	gotoxy(55,14);
	printf("%d",n);
	scr+=n;
       }
       else if(rnum[2][0]==n)
       {
	gotoxy(25,15);
	printf("%d",n);
	scr+=n;
       }
       else if(rnum[2][1]==n)
       {
	gotoxy(40,15);
	printf("%d",n);
	scr+=n;
       }
       else if(rnum[2][2]==n)
       {
	gotoxy(55,15);
	printf("%d",n);
	scr+=n;
       }
       if(scr>=300)
       goto Round4;
       else
       {
       gotoxy(1,7);
       printf("Oops! You Lost");
       goto End3;
       }
      Round4:
      cleardevice();
      point+=1;
      scr=0;
      srand(time(NULL));
      for(i=0;i<=3;i++)
      {
       gotoxy(20,k);
       for(j=0;j<=3;j++)
       {
	r2[i][j]=rand()%300+1;
	//printf("%d\t\t",r2[i][j]);
       }
       printf("\n");
       k++;
      }
      rectangle(130,190,540,260);
      line(200,190,200,260);
      line(300,190,300,260);
      line(420,190,420,260);
      line(130,205,540,205);
      line(130,223,540,223);
      line(130,239,540,239);
      //setfillstyle(1,0);
      //floodfill(181,249,1);
      gotoxy(1,2);
      printf("Enter Your First Try : ");
      scanf("%d",&n);
      if(r2[0][0]==n)
       {
	gotoxy(20,13);
	printf("%d",n);
	scr+=n;
	if(scr!=300)
	goto S5;
	if(scr==300)
	goto Round5;
       }
      else if(r2[0][1]==n)
      {
       gotoxy(35,13);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S5;
       if(scr==300)
       goto Round5;
      }
      else if(r2[0][2]==n)
      {
       gotoxy(50,13);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S5;
       if(scr==300)
       goto Round5;
      }
      else if(r2[0][3]==n)
      {
       gotoxy(65,13);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S5;
       if(scr==300)
       goto Round5;
      }
      else if(r2[1][0]==n)
      {
       gotoxy(20,14);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S5;
       if(scr==300)
       goto Round5;
      }
      else if(r2[1][1]==n)
      {
       gotoxy(35,14);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S5;
       if(scr==300)
       goto Round5;
      }
      else if(r2[1][2]==n)
      {
       gotoxy(50,14);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S5;
       if(scr==300)
       goto Round5;
      }
       else if(r2[1][3]==n)
      {
       gotoxy(65,14);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S5;
       if(scr==300)
       goto Round5;
      }
      else if(r2[2][0]==n)
      {
       gotoxy(20,15);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S5;
       if(scr==300)
       goto Round5;
      }
      else if(r2[2][1]==n)
      {
       gotoxy(35,15);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S4;
       if(scr==300)
       goto Round5;
      }
       else if(r2[2][2]==n)
      {
       gotoxy(50,15);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S5;
       if(scr==300)
       goto Round5;
      }
       else if(r2[2][3]==n)
      {
       gotoxy(65,15);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
	goto S5;
       if(scr==300)
	goto Round5;
      }
      else if(r2[3][0]==n)
      {
       gotoxy(20,16);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S5;
       if(scr==300)
	goto Round5;
      }
      else if(r2[3][1]==n)
      {
       gotoxy(35,16);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S5;
       if(scr==300)
	goto Round5;
      }
      else if(r2[3][2]==n)
      {
       gotoxy(50,16);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S5;
       if(scr==300)
	goto Round5;
      }
       else if(r2[3][3]==n)
      {
       gotoxy(65,16);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S5;
      }
       if(scr==300)
	goto Round5;
      else
      {
       gotoxy(1,3);
       printf("Oops! Try Again");
       S5:
       gotoxy(1,4);
       printf("Enter Your Second Try : ");
       scanf("%d",&n);
      }
       if(r2[0][0]==n)
       {
	gotoxy(20,13);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto Round5;
	else
	 goto T5;
       }
       else if(r2[0][1]==n)
       {
	gotoxy(35,13);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto Round5;
	else
	 goto T5;
       }
       else if(r2[0][2]==n)
       {
	gotoxy(50,13);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto Round5;
	else
	 goto T5;
       }
       else if(r2[0][3]==n)
       {
	gotoxy(65,13);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto Round5;
	else
	 goto T5;
       }
       else if(r2[1][0]==n)
       {
	gotoxy(20,14);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto Round5;
	else
	 goto T5;
       }
       else if(r2[1][1]==n)
       {
	gotoxy(35,14);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto Round5;
	else
	 goto T5;
       }
       else if(r2[1][2]==n)
       {
	gotoxy(50,14);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto Round5;
	else
	 goto T5;
       }
       else if(r2[1][3]==n)
       {
	gotoxy(65,14);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto Round5;
	else
	 goto T5;
       }
       else if(r2[2][0]==n)
       {
	gotoxy(20,15);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto Round5;
	else
	 goto T5;
       }
       else if(r2[2][1]==n)
       {
	gotoxy(35,15);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto Round5;
	else
	 goto T5;
       }
       else if(r2[2][2]==n)
       {
	gotoxy(50,15);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto Round5;
	else
	 goto T5;
       }
       else if(r2[2][3]==n)
       {
	gotoxy(65,15);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto Round5;
	else
	 goto T5;
       }
       else if(r2[3][0]==n)
       {
	gotoxy(20,16);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto Round5;
	else
	 goto T5;
       }
       else if(r2[3][1]==n)
       {
	gotoxy(35,16);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto Round5;
	else
	 goto T5;
       }
       else if(r2[3][2]==n)
       {
	gotoxy(50,16);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto Round5;
	else
	 goto T5;
       }
       else if(r2[3][3]==n)
       {
	gotoxy(65,16);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto Round5;
	else
	 goto T5;
       }
       else
       {
	gotoxy(1,5);
	printf("Oops! Try Again");
	T5:
	gotoxy(1,6);
	printf("Enter Your Third Try : ");
	scanf("%d",&n);
       }
       if(r2[0][0]==n)
       {
	gotoxy(20,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[0][1]==n)
       {
	gotoxy(35,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[0][2]==n)
       {
	gotoxy(50,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[0][3]==n)
       {
	gotoxy(65,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[1][0]==n)
       {
	gotoxy(20,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[1][1]==n)
       {
	gotoxy(35,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[1][2]==n)
       {
	gotoxy(50,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[1][3]==n)
       {
	gotoxy(65,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[2][0]==n)
       {
	gotoxy(20,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[2][1]==n)
       {
	gotoxy(35,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[2][2]==n)
       {
	gotoxy(50,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[2][3]==n)
       {
	gotoxy(65,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[3][0]==n)
       {
	gotoxy(20,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[3][1]==n)
       {
	gotoxy(35,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[3][2]==n)
       {
	gotoxy(50,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r2[3][3]==n)
       {
	gotoxy(65,16);
	printf("%d",n);
	scr+=n;
       }
       if(scr>=300)
       goto Round5;
       else
       gotoxy(1,7);
       printf("Oops! You Lost");
       goto End3;
      Round5:
      cleardevice();
      point+=3;
      scr=0;
      srand(time(NULL));
      for(i=0;i<=4;i++)
      {
       gotoxy(20,k);
       for(j=0;j<=4;j++)
       {
	r3[i][j]=rand()%300+1;
	//printf("%d\t",r3[i][j]);
       }
       printf("\n");
       k++;
      }
      rectangle(140,190,410,270);
      line(180,190,180,270);
      line(230,190,230,270);
      line(290,190,290,270);
      line(350,190,350,270);
      line(140,205,410,205);
      line(140,223,410,223);
      line(140,239,410,239);
      line(140,255,410,255);
      //setfillstyle(1,0);
      //floodfill(181,249,1);
      gotoxy(1,2);
      printf("Enter Your First Try : ");
      scanf("%d",&n);
      if(r3[0][0]==n)
       {
	gotoxy(20,13);
	printf("%d",n);
	scr+=n;
	if(scr!=300)
	goto S6;
	if(scr==300)
	goto end3;
       }
      else if(r3[0][1]==n)
      {
       gotoxy(25,13);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S6;
       if(scr==300)
       goto end3;
      }
      else if(r3[0][2]==n)
      {
       gotoxy(30,13);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S6;
       if(scr==300)
       goto end3;
      }
      else if(r3[0][3]==n)
      {
       gotoxy(40,13);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S6;
       if(scr==300)
       goto end3;
      }
      else if(r3[0][4]==n)
      {
       gotoxy(50,13);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S6;
       if(scr==300)
       goto end3;
      }
      else if(r3[1][0]==n)
      {
       gotoxy(20,14);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S6;
       if(scr==300)
       goto end3;
      }
      else if(r3[1][1]==n)
      {
       gotoxy(25,14);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S6;
       if(scr==300)
       goto end3;
      }
      else if(r3[1][2]==n)
      {
       gotoxy(30,14);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S6;
       if(scr==300)
       goto end3;
      }
       else if(r3[1][3]==n)
      {
       gotoxy(40,14);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S6;
       if(scr==300)
       goto end3;
      }
      else if(r3[1][4]==n)
      {
       gotoxy(50,14);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S6;
       if(scr==300)
       goto end3;
      }
      else if(r3[2][0]==n)
      {
       gotoxy(20,15);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S6;
       if(scr==300)
       goto end3;
      }
      else if(r3[2][1]==n)
      {
       gotoxy(25,15);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S6;
       if(scr==300)
       goto end3;
      }
       else if(r3[2][2]==n)
      {
       gotoxy(30,15);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S6;
       if(scr==300)
       goto end3;
      }
       else if(r3[2][3]==n)
      {
       gotoxy(40,15);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
	goto S6;
       if(scr==300)
	goto end3;
      }
      else if(r3[2][4]==n)
      {
       gotoxy(50,15);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
	goto S6;
       if(scr==300)
	goto end3;
      }
      else if(r3[3][0]==n)
      {
       gotoxy(20,16);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S6;
       if(scr==300)
	goto end3;
      }
      else if(r3[3][1]==n)
      {
       gotoxy(25,16);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S6;
       if(scr==300)
	goto end3;
      }
      else if(r3[3][2]==n)
      {
       gotoxy(30,16);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S6;
       if(scr==300)
	goto end3;
      }
       else if(r3[3][3]==n)
      {
       gotoxy(40,16);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S6;
       if(scr==300)
	goto end3;
      }
      else if(r3[3][4]==n)
      {
       gotoxy(50,16);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S6;
       if(scr==300)
	goto end3;
       }
       else if(r3[4][0]==n)
      {
       gotoxy(20,17);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S6;
       if(scr==300)
	goto end3;
      }
      else if(r3[4][1]==n)
      {
       gotoxy(25,17);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S6;
       if(scr==300)
	goto end3;
      }
      else if(r3[4][2]==n)
      {
       gotoxy(30,17);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S6;
       if(scr==300)
	goto end3;
      }
       else if(r3[4][3]==n)
      {
       gotoxy(40,17);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S6;
       if(scr==300)
	goto end3;
      }
      else if(r3[4][4]==n)
      {
       gotoxy(50,17);
       printf("%d",n);
       scr+=n;
       if(scr!=300)
       goto S6;
       if(scr==300)
       {
	goto end3;
       }
       }
      else
      {
       gotoxy(1,3);
       printf("Oops! Try Again");
       S6:
       gotoxy(1,4);
       printf("Enter Your Second Try : ");
       scanf("%d",&n);
      }
       if(r3[0][0]==n)
       {
	gotoxy(20,13);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[0][1]==n)
       {
	gotoxy(25,13);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[0][2]==n)
       {
	gotoxy(30,13);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[0][3]==n)
       {
	gotoxy(40,13);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[0][4]==n)
       {
	gotoxy(50,13);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[1][0]==n)
       {
	gotoxy(20,14);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[1][1]==n)
       {
	gotoxy(25,14);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[1][2]==n)
       {
	gotoxy(30,14);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[1][3]==n)
       {
	gotoxy(40,14);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[1][4]==n)
       {
	gotoxy(50,14);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[2][0]==n)
       {
	gotoxy(20,15);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[2][1]==n)
       {
	gotoxy(25,15);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[2][2]==n)
       {
	gotoxy(30,15);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[2][3]==n)
       {
	gotoxy(40,15);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[2][4]==n)
       {
	gotoxy(50,15);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[3][0]==n)
       {
	gotoxy(20,16);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[3][1]==n)
       {
	gotoxy(25,16);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[3][2]==n)
       {
	gotoxy(30,16);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[3][3]==n)
       {
	gotoxy(40,16);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[3][4]==n)
       {
	gotoxy(50,16);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[4][0]==n)
       {
	gotoxy(20,17);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[4][1]==n)
       {
	gotoxy(25,17);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[4][2]==n)
       {
	gotoxy(30,17);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[4][3]==n)
       {
	gotoxy(40,17);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	 goto end3;
	else
	 goto T6;
       }
       else if(r3[4][4]==n)
       {
	gotoxy(50,17);
	printf("%d",n);
	scr+=n;
	if(scr>=300)
	{
	 goto end3;
	}
	else
	 goto T6;
       }
       else
       {
	gotoxy(1,5);
	printf("Oops! Try Again");
	T6:
	gotoxy(1,6);
	printf("Enter Your Third Try : ");
	scanf("%d",&n);
       }
       if(r3[0][0]==n)
       {
	gotoxy(20,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[0][1]==n)
       {
	gotoxy(25,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[0][2]==n)
       {
	gotoxy(30,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[0][3]==n)
       {
	gotoxy(40,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[0][4]==n)
       {
	gotoxy(50,13);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[1][0]==n)
       {
	gotoxy(20,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[1][1]==n)
       {
	gotoxy(25,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[1][2]==n)
       {
	gotoxy(30,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[1][3]==n)
       {
	gotoxy(40,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[1][4]==n)
       {
	gotoxy(50,14);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[2][0]==n)
       {
	gotoxy(20,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[2][1]==n)
       {
	gotoxy(25,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[2][2]==n)
       {
	gotoxy(30,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[2][3]==n)
       {
	gotoxy(40,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[2][4]==n)
       {
	gotoxy(50,15);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[3][0]==n)
       {
	gotoxy(20,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[3][1]==n)
       {
	gotoxy(25,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[3][2]==n)
       {
	gotoxy(30,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[3][3]==n)
       {
	gotoxy(40,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[3][4]==n)
       {
	gotoxy(50,16);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[4][0]==n)
       {
	gotoxy(20,17);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[4][1]==n)
       {
	gotoxy(25,17);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[4][2]==n)
       {
	gotoxy(30,17);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[4][3]==n)
       {
	gotoxy(40,17);
	printf("%d",n);
	scr+=n;
       }
       else if(r3[4][4]==n)
       {
	gotoxy(50,17);
	printf("%d",n);
	scr+=n;
       }
       if(scr>=200)
       {
       goto end3;
       }
       else
       gotoxy(1,7);
       printf("Oops! You Lost");
       end3:
       point+=5;
       End3:
       cleardevice();
       gotoxy(1,1);
       if(point==9)
       {
       fprintf(alpha,"\n\t%s : %d",name,point+1);
       }
       else
       {
       fprintf(alpha,"\n\t%s : %d",name,point);
       }
       printf("\n\nDo You Want To Play Again (Y/N) : ");
       yn=getche();
       if((yn == 'Y') || (yn == 'y'))
	{
		   goto top;
	}
       break;
      }
     fclose("alpha");
     }
   }
  getch();
  closegraph();
  }

