#include <stdio.h>
void dsc();
void main()
 {
  dsc();
 }
void dsc()
 {
  int arr[100];
  int n=5,i,j,dsc;
  clrscr();

  printf("\n\nSort Elements of Array in Decending Order :\n ");
  printf("----------------------------------------\n");

  printf("Input %d Elements in the Array :\n",n);
  for(i=0;i<n;i++)
   {
    printf("Element - %d : ",i);
    scanf("%d",&arr[i]);
   }

  for(i=0; i<n; i++)
   {
    for(j=i+1; j<n; j++)
     {
      if(arr[j] > arr[i])
       {
	dsc = arr[i];
	arr[i] = arr[j];
	arr[j] = dsc;
       }
     }
   }
  printf("\nElements of Array in Sorted Decending Order:\n");
  for(i=0; i<n; i++)
   {
    printf("%d  ", arr[i]);
   }
  printf("\n\n");

  getch();
 }
