#include <stdio.h>
int main ()
{
	char character ;
	printf ("Enter a character:");
	fflush(stdin);fflush(stdout);
	scanf ("%c" , &character);
	if (character >='a'&&character<='z' || character >='A'&&character<='Z')
		printf ("%c is an alphabet \n",character);
	else
		printf ("%c is not alphabet \n" , character);
}
