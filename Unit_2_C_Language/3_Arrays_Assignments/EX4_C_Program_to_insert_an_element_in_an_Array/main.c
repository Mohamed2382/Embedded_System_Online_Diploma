#include <stdio.h>
void main ()
{
	int arr[50];
	int i,Num,Element,Loc;

	printf ("Enter no of elements: ");
	fflush(stdin);fflush(stdout);
	scanf  ("%i" ,&Num);

	printf ("Enter the elements: \n");
	for(i=0 ; i<Num ; i++)
	{
		fflush(stdin);fflush(stdout);
		scanf  ("%i" ,&arr[i]);
	}

	printf ("Enter the element to be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf  ("%i" ,&Element);

	printf ("Enter the location : ");
	fflush(stdin);fflush(stdout);
	scanf  ("%i" ,&Loc);

	// Insert the element
	for(i=Num ; i>=(Loc) ; i--)
	{
		arr[i]=arr[i-1];
	}
	arr[Loc]=Element;

	for(i=0 ; i<Num+1 ; i++)
	{
		printf ("%i ",arr[i]);
	}


}
