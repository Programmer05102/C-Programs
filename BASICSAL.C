#include<stdio.h>
#include<conio.h>
void main()
 {
  float bs=15000,a1,a2,gr,tx,net;
  clrscr();
  a1=bs*0.1,a2=bs*0.2;
  gr=bs+a1+a2;
  tx=gr*0.175;
  net=gr-tx;
  printf("\nBasic Salary \t= %.2f",bs);
  printf("\nAllowance 1 \t= %.2f",a1);
  printf("\nAllownace 2 \t= %.2f",a2);
  printf("\nGross Salary \t= %.2f",gr);
  printf("\nTax \t\t= %.2f",tx);
  printf("\nNet Salary \t= %.2f",net);

  getch();

 }

