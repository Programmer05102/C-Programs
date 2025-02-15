
#include<conio.h>
#include<stdio.h>
	void main()
		{
		int x = 2; 
		clrscr(); 
		printf("%d", x-1); 
		x+=1; 
		top: 
		printf("\n%d",x); 
		x*=2; 
		if(x<=128)
			goto top;

		getch();
	}


