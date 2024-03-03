//takes_string_from_the_user_and_check_if_it_the_same_USERNAME_or_not.

#include <stdio.h>

void readName(char arr[], int maxLength) {
	printf("Enter your name:\n");
	int i;
	for (i = 0; i < maxLength - 1; i++) {
		//arr[i] = getchar();
		scanf ("%c" , &arr[i]);
		if (arr[i] == '\n') {
			break;
		}
	}
	arr[i] = '\0';
}

int check (char arr1[] , char arr2[]){
	int i = 0 ;
	int equal = 1;
	for (i =0 ; arr1[i] != '\0' || arr2[i] != '\0' ; i++){
		if (arr1[i] == arr2[i])
			equal =1 ;
		else {
			equal = 0;
			break;
		}
	}
	return equal;
}
int main() {
	char arr1[100], arr2[100] ="mohamed";
	readName(arr1, 100);
	if (check (arr1 , arr2)){
		printf("correct user\n");
	}
	else
		printf("wrong user\n");
	return 0;
}



int compare(char a[], char b[]);

int main()
{
	char a[100]="marwa goda";
	char b[100];


	printf("please enter your user name\n");
	fflush(stdin);fflush(stdout);
	gets(b);

	if (compare(a, b) == 1)
		printf("correct user\n");
	else
		printf("wrong user\n");

	return 0;
}

int compare(char a[], char b[])
{
	int i = 0;
	while (a[i] == b[i])
	{
		if (a[i] == '\0' || b[i] == '\0') break;
		i++;
	}

	if (a[i] == '\0' && b[i] == '\0') return 1;
	else
		return 0;
}

