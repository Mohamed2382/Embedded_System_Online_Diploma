
//clear_spesified_bit_in_a_given_number
#include "stdio.h"
int main()
{
	int num, n,new_num;

	/* Input number from user */
	printf("Enter any number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);

	/* Input bit number you want to clear */
	printf("Enter nth bit to clear (0-31): ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &n);

	/*
	 * Left shifts 1 to n times
	 * Perform complement of above
	 * finally perform bitwise AND with num and result of above
	 */
	new_num =num & (~(1 << n));

	printf("Bit cleared successfully.\n\n");
	printf("Number before clearing %d bit: %d (in decimal)\n", n, num);
	printf("Number after clearing %d bit: %d (in decimal)\n", n, new_num);

	return 0;
}
