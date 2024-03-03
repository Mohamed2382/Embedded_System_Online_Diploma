#include <stdio.h>
int main ()
{
	char character ;
	printf ("Enter an Alphabet :");
	fflush(stdin);fflush(stdout);
	scanf ("%c" , &character );
	if (character=='a'||character=='e'||character=='i'||character=='o'||character=='u')
	{
		printf ("%c is Vowel\n" , character);
	}
	else
	{
		printf ("%c is Consonant" , character);
	}
}



