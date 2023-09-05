#include <stdio.h>
int  main ()
{
	char arr[50];
	char character;
	int counter , count=0;
	printf ("enter a string ");
	fflush (stdout);
	gets(arr);
	counter=0;
	while (arr[counter]!='\0')
    {
        count++;
        counter++;
    }
    printf ("length of string %d\n" , count);

}
