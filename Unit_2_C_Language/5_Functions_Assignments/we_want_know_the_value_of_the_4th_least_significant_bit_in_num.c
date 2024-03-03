
//we_want_know_the_value_of_the_4th_least_significant_bit_in_num's_binary_representation
int main()
{
	int n, c, k;
	printf("Enter an integer in decimal number system\n");
	fflush(stdin);fflush(stdout);
	scanf("%d", &n);

	printf("%d in binary number system is:\n", n);

	for (c = 31; c >= 0; c--)
	{
		k = n >> c;

		if (k & 1)
			printf("1");
		else
			printf("0");
	}

	printf("\n");
	k=n>>3;
	if(k&1)
		printf(" 4th least significant bit is 1");
	else
		printf("4th least significant bit is 0");
	return 0;
}
