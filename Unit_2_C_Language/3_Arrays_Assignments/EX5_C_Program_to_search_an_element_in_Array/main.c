#include <stdio.h>
int  main ()
{
	int arr[50];
	int counter,number,element;

	printf ("Enter no of elements: ");
	fflush(stdin);fflush(stdout);
	scanf  ("%i" ,&number);
	for (counter=0 ; counter<number ; ++counter)
	{
		fflush(stdout);
		scanf ("%d" , &arr[counter]);
	}
	printf ("entered the element to be searched \n");
	fflush(stdout);
	scanf ("%d" , &element);
	for (counter = 0 ; counter<number ; ++counter)
	{
		if (arr[counter]==element)
			printf ("number at the location = %d " , counter);
		
	}



}
