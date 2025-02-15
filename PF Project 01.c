 #include<stdio.h>
 #include<conio.h>
 #include<graphics.h>

 void finish();
 void Finish();
 void FinisH();
 void Error();
 void graph();

  void main()
 {
 int a;
 int c;
 graph();
 setcolor(GREEN);
 rectangle(20,20,620,440);
 rectangle(15,15,625,445);
 setcolor(YELLOW);
 settextstyle(0,0,5);
 outtextxy(210,150,"WELCOME");
 settextstyle(0,0,3);
 outtextxy(50,250,"RANDOM LOGIC AND HUMOUR");
 getche();
 closegraph();
 graph();
 setcolor(GREEN);
 rectangle(20,20,620,440);
 rectangle(15,15,625,445);
 setcolor(YELLOW);
 settextstyle(0,0,5);
 outtextxy(210,50,"OPTIONS");
 gotoxy(25,10);
 printf("1.PLAY GAME");
 gotoxy(25,13);
 printf("2.Exit");
 gotoxy(25,16);
 printf("ENTER YOUR CHOICE : ");
 setbkcolor(CYAN);
 scanf("%d", &a);
 closegraph();
 top:
 if(a == 1){

	graph();
	printf("\nMENU");
	printf("\n1. EASY");
	printf("\n2. MEDIUM");
	printf("\n3. HARD");
	printf("\nENTER YOUR CHOICE : ");
	setbkcolor(BLUE);
	scanf("%d", &c);
	closegraph();
	graph();
	if(c == 1){
		int x;
		int y;
		int z;
	      //	clrscr();
		printf("\n\t\t\t   WELCOME TO EASY LEVEL");
		printf("\n Q1: 2 , 5 , 11 , 23 ,");
		setbkcolor(GREEN);
		scanf("%d" , &x);
		if(x == 47){
			goto next;
		}
		else{
			Error();
		}

		next:
		printf("\n Q2: 1 , 3 , 7 , 9 ,");
		scanf("%d", &y);
		if(y == 11){
			goto nextt;
		}
			else{
			 Error();
		}
		nextt:
		printf("\n Q3: 10, 100, 20, 400, 30 ,");
		scanf("%d", &z);
		if(z == 900){
			finish();
		}
			else{
			Error();
		}


	}
		closegraph();
	graph();
	if(c == 2){
		int y;
	       //	clrscr();
		printf("\n\t\t\t   WELCOME TO MEDIUM LEVEL");
		printf("\n Q1: 100 , 50 , 60 , 30 ,");
		setbkcolor(RED);
		scanf("%d" , &y);
		if(y == 40){
			goto Next;
		}
		else{
			Error();
		}
		Next:
		printf("\n Q2: 9 , 80 , 8 , 63 ,7 ,");
		scanf("%d", &y);
		if(y == 48){
			goto Nextt;
		}
		else{
			 Error();
		}
		Nextt:
		printf("\n Q3: 1 , 7 , 12 , 16 ,");
		scanf("%d", &y);
		if(y == 19){
			Finish();
		}
		else{
			Error();
		}

	}
	closegraph();
	graph();
		if(c == 3){
		int z;
	       //	clrscr();
		printf("\n\t\t\t   WELCOME TO HARD LEVEL");
		printf("\n Q1: 100 , 50 , 500 , 250 ,");
		setbkcolor(BLACK);
		scanf("%d" , &z);
		if(z == 2500){
			goto NexT;
		}
		else{
			Error();
		}
		NexT:
		printf("\n Q2: 5000 , 500 , 2500 , 250 ,");
		scanf("%d", &z);
		if(z == 1250){
			goto NexTT;
		}
		else{
			Error();
		}
		NexTT:
		printf("\n Q3: 80 , 40 , 120 , 160 , 280 ,");
		scanf("%d", &z);
		if(z == 440){
			FinisH();
		}
		else{
			Error();
		}

	}
	closegraph();
 }



else if(a == 2){
	char b;
	printf("ARE YOU SURE YOU WANT TO EXIT?");
	printf("\nY or N ");
	scanf("%d", &b);
	if(b == 1){
		goto exit;
	}
	else if(b == 2){
		goto top;
	}

}
else{
graph();
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\twrong choice");
}
 getch();
  exit:
 }
 void finish()
 {
    graph();
    setbkcolor(BLUE);
    setcolor(YELLOW);
    settextstyle(0,0,2);
    outtextxy(170,200,"CONGRATULATIONS");
    outtextxy(70,300,"YOU'VE COMPLETED EASY LEVEL");
    getche();
    closegraph();
 };
 void Finish()
 {
   graph();
    setbkcolor(YELLOW);
    setcolor(GREEN);
    settextstyle(0,0,2);
    outtextxy(170,200,"CONGRATULATIONS");
    outtextxy(70,300,"YOU'VE COMPLETED MEDIUM LEVEL");
    getche();
    closegraph();
    }
 void FinisH()
 {
   graph();
    setbkcolor(RED);
    setcolor(MAGENTA);
    settextstyle(0,0,2);
    outtextxy(170,200,"CONGRATULATIONS");
    outtextxy(70,300,"YOU'VE COMPLETED HARD LEVEL");
    getche();
    closegraph();
 };
 void Error()
 {
   printf("WRONG ANSWER");
 };
 void graph()
 {
 int gd=DETECT ,gm;
 initgraph (&gd,&gm,"C:\\TC\\BGI");
 };

