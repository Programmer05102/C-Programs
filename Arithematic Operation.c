#include<stdio.h>
#include<conio.h>
	void main()
		{
		float a=10, b=20, c; 
		char ch, yn; 
		clrscr();
		top:
		printf("\nFirst value = %.2f",a); 
		printf("\nSecond value = %.2f", b); 
		printf("\nEnter Operator : "); 
		scanf("%c",&ch); 
		if(ch=='+')
			goto add; 
		else if(ch=='-')
			goto sub; 
		else if (ch=='*')
			goto multi; 
		else if (ch=='/')
			goto div; 
		else 
			goto top ; 
	add: 
		c=a+b; 
		printf("Total of A and B = %.2f",c); 
		printf("\nDo you want to continue (Y/N):"); 		
		scanf("%c",&yn); 
		yn = getche(); 
		if((yn=='y')||(yn=='Y'))
			goto top; 

		else 
			goto end; 

		sub:
		c=a-b; 
		printf("Total of A and B = %.2f",c); 
		printf("\nDo you want to continue (Y/N):"); 		
		scanf("%c",&yn); 
		yn = getche(); 		
		if((yn=='y')||(yn=='Y'))
			goto top; 

		else 
			goto end; 		
	multi:		
		c=a*b; 
		printf("Total of A and B = %.2f",c); 
		printf("\nDo you want to continue (Y/N):"); 		
		scanf("%c",&yn); 
		yn = getche(); 
	if((yn=='y')||(yn=='Y'))
			goto top; 

		else 
			goto end; 

	div: 
		c=a/b; 
		printf("Total of A and B = %.2f",c); 
		printf("\nDo you want to continue (Y/N):"); 		
		scanf("%c",&yn); 
		yn = getche(); 
		if((yn=='y')||(yn=='Y'))
			goto top; 

		else 
			goto end; 		
	end: 	
	getch(); 
		}












		
				




