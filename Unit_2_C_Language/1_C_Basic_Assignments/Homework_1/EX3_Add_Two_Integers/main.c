#include <stdio.h>
int main ()
{
	int number_1,number_2 ;
	printf ("Enter two integer:\n");
	fflush(stdin);fflush(stdout);
	scanf ("%d%d" , &number_1,&number_2);
	printf ("sum :%d\n" , number_1+number_2);

}
