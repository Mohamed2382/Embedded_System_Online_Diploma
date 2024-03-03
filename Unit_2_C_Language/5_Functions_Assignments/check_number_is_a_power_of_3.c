//check_number_is_a_power_of_3
#include <stdio.h>

int isPowerOfThree(int n) {
	// Handle edge cases
	if (n <= 0) {
		return 0;
	}

	// Divide the number by 3 until it becomes 1
	while (n > 1) {
		if (n % 3 != 0) {
			return 0; // Not a power of 3
		}
		n /= 3;
	}

	return 1; // It's a power of 3
}

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);

	if (isPowerOfThree(num)) {
		printf("%d is a power of 3.\n", num);
	} else {
		printf("%d is not a power of 3.\n", num);
	}

	return 0;
}

