#include<stdio.h>
#include<conio.h>
void main()
 {
  float m=1400,b=550,cg=520,cw=220,cn=160,cl=320,cm=450;
  clrscr();
  printf("\n\tRate of Sell");
  printf("\t\t\t\t\tRate of Purchase");
  printf("\n\nMutton \t\t= %.2f Per Kg",m);
  printf("\t\tMutton \t\t= %.2f Per Kg",m-(m*0.2));
  printf("Beef \t\t= %.2f Per Kg",b);
  printf("\t\t\tBeef \t\t= %.2f Per Kg",b-(b*0.2));
  printf("\nChicken Golden \t= %.2f Per Kg",cg);
  printf("\t\t\tChicken Golden \t= %.2f Per Kg",cg-(cg*0.2));
  printf("\nChicken Wings \t= %.2f Per Kg",cw);
  printf("\t\t\tChicken Wings \t= %.2f Per Kg",cw-(cw*0.2));
  printf("\nChicken Neck \t= %.2f Per Kg",cn);
  printf("\t\t\tChicken Neck \t= %.2f Per Kg",cn-(cn*0.2));
  printf("\nChicken Leg \t= %.2f Per Kg",cl);
  printf("\t\t\tChicken Leg \t= %.2f Per Kg",cl-(cl*0.2));
  printf("\nChicken Meat \t= %.2f Per Kg",cm);
  printf("\t\t\tChicken Meat \t= %.2f Per Kg",cm-(cm*0.2));
  m*=20,b*=10,cg*=30,cw*=30,cn*=30,cl*=30,cm*30;
  printf("\n\n\n\t\t\t\tProfit Per Day");
  printf("\n\n\t\t\tMutton \t\t= %.2f Per Kg",m-(m*0.2));
  printf("\n\t\t\tBeef \t\t= %.2f Per Kg",b-(b*0.2));
  printf("\n\t\t\tChicken Golden \t= %.2f Per Kg",cg-(cg*0.2));
  printf("\n\t\t\tChicken Wings \t= %.2f Per Kg",cw-(cw*0.2));
  printf("\n\t\t\tChicken Neck \t= %.2f Per Kg",cn-(cn*0.2));
  printf("\n\t\t\tChicken Leg \t= %.2f Per Kg",cl-(cl*0.2));
  printf("\n\t\t\tChicken Meat \t= %.2f Per Kg",cm-(cm*0.2));

  getch();
  }