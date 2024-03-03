#include <stdio.h>
int main ()
{
	int counter_1,counter_2 , a[2][2],t[2][2]  ;
	printf ("entered matrix a : \n");
	for (counter_1 = 0 ; counter_1 <2 ; ++counter_1 )
	{
		for (counter_2=0 ; counter_2<2 ; ++counter_2)
		{
			printf ("enter item (%d,%d) degree : " , counter_1,counter_2);
			fflush(stdin); fflush(stdout);
			scanf ("%d" , &a[counter_1][counter_2]);
		}
	}
	printf ("entered matrix t : \n");

	for (counter_1 = 0 ; counter_1 <2 ; ++counter_1 )
		{
			for (counter_2=0 ; counter_2<2 ; ++counter_2)
			{
				printf ("enter item (%d,%d) degree : " , counter_1,counter_2);
				fflush(stdin); fflush(stdout);
				scanf ("%d" , &t[counter_1][counter_2]);
			}
		}
	printf ("multiplication of matrix is : \n");
	for (counter_1 = 0 ; counter_1 <2 ; ++counter_1 )
	{
		for (counter_2=0 ; counter_2<2 ; ++counter_2)
		{
			printf ("%d \t  " , a[counter_1][counter_2]*t[counter_1][counter_2]);
		}
		printf ("\n");
	}


}

