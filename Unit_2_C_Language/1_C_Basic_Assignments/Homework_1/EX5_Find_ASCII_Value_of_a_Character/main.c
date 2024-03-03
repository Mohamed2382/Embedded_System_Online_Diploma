#include <stdio.h>
int main ()
{
	char character ;
	printf ("Enter a character:\n");
	fflush(stdin);fflush(stdout);
	scanf ("%c" , &character);
	printf ("ASCIIvalue of %c : %d\n" , character,character);

}
