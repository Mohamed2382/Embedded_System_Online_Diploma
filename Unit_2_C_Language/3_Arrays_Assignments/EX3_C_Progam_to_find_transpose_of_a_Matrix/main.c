#include <stdio.h>
int main ()
{
	int counter_1,counter_2 , a[2][3],t[2][3] ;
	for (counter_1 = 0 ; counter_1 <2 ; ++counter_1 )
	{
		for (counter_2=0 ; counter_2<3 ; ++counter_2)
		{
			printf ("enter item (%d,%d) degree : " , counter_1,counter_2);
			fflush(stdin); fflush(stdout);
			scanf ("%d" , &a[counter_1][counter_2]);
		}
	}
	printf ("matrix is : \n");
	for (counter_1 = 0 ; counter_1 <2 ; ++counter_1 )
	{
		for (counter_2=0 ; counter_2<3 ; ++counter_2)
		{
			printf ("%d \t  " , a[counter_1][counter_2]);
		}
		printf ("\n");

	}
	printf ("matrix Transpose \n");

	for (counter_1 = 0 ; counter_1 <3 ; ++counter_1 )
	{
		for (counter_2=0 ; counter_2<2 ; ++counter_2)
		{
			t[counter_1][counter_2]=a[counter_2][counter_1];
			printf ("%d \t " , t[counter_1][counter_2]);
		}
		printf ("\n");

	}



}

