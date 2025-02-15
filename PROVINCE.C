#include<stdio.h>
#include<conio.h>
void main()
 {
	float bc=13000*160,ba=bc*0.25,n=20000000,k,p,s,t;
	clrscr();
	printf("\nTax Paid by Balochistan = Rs %.2f",ba+bc);
	printf("\n\tTax Paid by Balochictan Agriculture = Rs %.2f",ba);
	printf("\n\tTax Paid by Balochistan Coal = Rs %.2f",bc);
	n=(n/12)*160;
	printf("\nTax Paid by Northern Areas = Rs%.2f",n);
	k=ba+bc+n;
	printf("\nTax Paid by KPK = Rs %.2f",k);
	p=((ba+bc)*0.3)+(k*0.35);
	printf("\nTax Paid by Punjab = Rs%.2f",p);
	s=p*2;
	printf("\nTax Paid by Sindh = Rs %.2f",s);
	t=s+p+ba+bc+k+n;
	printf("\nTax Paid by All Provinces = Rs %.2f",t);

	getch();

 }

