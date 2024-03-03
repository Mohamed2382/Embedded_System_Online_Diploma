#include <stdio.h>
int main ()
{
	int number,sum=0 ,counter;
	printf ("Enter an integer :");
	fflush(stdin);fflush(stdout);
	scanf ("%d" , &number);
	for (counter=0 ; counter<=number ; ++counter)
		sum+=counter;
	printf ("sum = %d\n",sum );
}
