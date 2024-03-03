#include <stdio.h>
int main ()
{
	int number_1,number_2 , temp ;
	printf ("Enter value of  number_1:\n");
	fflush(stdin);fflush(stdout);
	scanf ("%d" , &number_1);
	printf ("Enter value of  number_2:\n");
	fflush(stdin);fflush(stdout);
	scanf ("%d" , &number_2);
	number_1^=number_2;
	number_2^=number_1;
	number_1^=number_2;

	printf ("after swapping , value of number_1 :%d\n " , number_1);
	printf ("after swapping , value of number_2 :%d\n" , number_2);

}
