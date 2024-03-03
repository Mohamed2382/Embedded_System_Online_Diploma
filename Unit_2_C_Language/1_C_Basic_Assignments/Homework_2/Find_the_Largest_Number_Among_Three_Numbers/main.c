#include <stdio.h>
int main ()
{
	int number_1,number_2,number_3;
	printf ("enter three number :\n");
	fflush (stdin);fflush(stdout);
	scanf ("%d%d%d" , &number_1 , &number_2 , &number_3);
	if (number_1>number_2)
	{
		if (number_1>number_3)
			printf ("the largest number is %d \n" , number_1);

		else
			printf ("the largest number is %d \n" , number_3);
	}
	else
	{
		if (number_2>number_3)
			printf ("the largest number is %d \n" , number_2);
		else
			printf ("the largest number is %d \n" , number_3);
	}
}
