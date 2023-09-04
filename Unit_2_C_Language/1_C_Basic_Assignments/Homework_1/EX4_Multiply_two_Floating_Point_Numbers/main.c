#include <stdio.h>
int main ()
{
	float number_1,number_2 ;
	printf ("Enter two number:\n");
	fflush(stdin);fflush(stdout);
	scanf ("%f%f" , &number_1,&number_2);
	printf ("product :%0.2f\n" , number_1*number_2);

}
