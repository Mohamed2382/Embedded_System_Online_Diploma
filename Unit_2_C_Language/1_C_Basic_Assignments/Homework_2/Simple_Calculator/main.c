#include <stdio.h>
int main ()
{
	int number_1,number_2;char operation;
	printf ("Enter value of first number  :");
	fflush(stdin);fflush(stdout);
	scanf ("%d" , &number_1 );
	printf ("Enter operation  :");
	fflush(stdin);fflush(stdout);
	scanf ("%c" , &operation);
	printf ("Enter value of second number  :");
	fflush(stdin);fflush(stdout);
	scanf ("%d" , &number_2 );
	switch(operation)
	{
	case'+':
		printf("sum two number is %d \n" , number_1+number_2);
		break;
	case'-':
		printf("subtract two number is %d \n" , number_1-number_2);
		break;
	case'/':
		printf("divide two number is %0.2f\n" , (float)number_1/number_2);
		break;
	case'*':
		printf("multiply two number is %d \n" , number_1*number_2);
		break;
	default:
		printf ("Error! operator not correct\n");
	}
}
