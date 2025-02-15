#include<stdio.h>
#include<conio.h>
	int main()
		{
		int a[6]={1,2,3,4,5,6}, sum=0; int x=0;
		clrscr();
		top:
		if(x<=5)
			{
			printf("  %d + %d = %d \n",sum, a[x], sum+a[x]);
			sum=sum+a[x];
			x++;
			goto top;
			}
			printf("\n  SUM = %d",sum);
		getch();
		}
