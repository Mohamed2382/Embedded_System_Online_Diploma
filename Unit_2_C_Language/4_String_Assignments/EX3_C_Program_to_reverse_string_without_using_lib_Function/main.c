#include <stdio.h>
#include <string.h>

int main (){

	char string [100] ,arr[100], c ,x , count=0  ;
	printf ("enter your string \n");
	fflush (stdin);fflush(stdout);
	fgets (string  , 100 , stdin);
	x = strlen(string);
	int i=0 , j;
	while (string[i]!='\0'){
		arr[x-1]=string[i];
		i++;
		x--;
	}
	printf ("%s" , arr);






}
