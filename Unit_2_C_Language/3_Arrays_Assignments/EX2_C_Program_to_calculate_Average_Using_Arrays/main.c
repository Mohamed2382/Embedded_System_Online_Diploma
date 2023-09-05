#include <stdio.h>
int main ()
{
	int number , counter;
	float arr[100] ,sum=0.0 ,average;
	printf ("enter the number of data:\n");
	fflush(stdin);fflush(stdout);
	scanf ("%d", &number);
	while (number>100 || number<=0)
	{
		printf ("Error! number should in range of (1 to 100)\n");
		printf ("enter the number again :");
		fflush(stdin);fflush(stdout);
		scanf ("%d", &number);
	}
	for (counter=1;counter<=number ; counter++)
	{
		printf ("enter number :");
		fflush(stdin);fflush(stdout);
		scanf ("%f", &arr[counter]);
		sum+=arr[counter];
	}
	average=(sum/number);
	printf ("average is %0.2f \n" , average);
}

