#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
	void main()
		{
		int x=1, col=5, row=5;
		clrscr();
		top:
		gotoxy(col,row);
		printf("\n%d", x);
		x+=1;
		row+=1;
		if(x<=10)
		goto top;

		getch();
		}


