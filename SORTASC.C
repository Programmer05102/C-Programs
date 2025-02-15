#include <stdio.h>
void asc();
void main()
 {
  asc();
 }
void asc()
 {
  int arr[100];
  int n=5,i,j,asc;
  clrscr();

  printf("\n\nSort Elements of Array in Ascending Order :\n ");
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
      if(arr[j] < arr[i])
       {
	asc = arr[i];
	arr[i] = arr[j];
	arr[j] = asc;
       }
     }
   }
  printf("\nElements of Array in Sorted Ascending Order:\n");
  for(i=0; i<n; i++)
   {
    printf("%d  ", arr[i]);
   }
  printf("\n\n");

  getch();
 }
