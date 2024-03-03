#include <stdio.h>
int  main ()
{
	char arr[50];
	char character;
	int counter , count=0;
	printf ("enter a string ");
	fflush (stdout);
	gets(arr);
	printf ("enter a character ");
	fflush(stdin);fflush (stdout);
	scanf ("%c" , &character);
	counter=0;
	while(arr[counter]!='\0')
	{
		if (character==arr[counter])
			count++;
		counter++;
	}
	printf ("frequency of %c = %d\n",character,count);
	fflush (stdout);


}
