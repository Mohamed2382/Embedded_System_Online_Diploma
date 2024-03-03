#include <stdio.h>
int main ()
{
	int number,factorial=1 ,counter;
	printf ("Enter an integer :");
	fflush(stdin);fflush(stdout);
	scanf ("%d" , &number);
	for (counter=number ; counter>0 ; --counter)
		factorial*=counter;
	printf ("factorial = %d\n",factorial );
}
