// Convert_the_ASCII_array_to_unsigned_integer
#include <stdio.h>

unsigned int asciiArrayToUnsignedInt(char asciiArray[], int size) {
	unsigned int result = 0;
	int i = 0;

	// Iterate through each character of the ASCII array
	while (i < size) {
		// Convert ASCII character to integer value
		int digit = asciiArray[i] - '0';

		// Multiply the current result by 10 and add the digit
		result = result * 10 + digit;

		// Move to the next character
		i++;
	}

	return result;
}

int main() {
	char asciiArray[20]; // Maximum size of input array
	int size;

	// Ask the user for the size of the array
	printf("Enter the size of the ASCII array: ");
	scanf("%d", &size);

	// Ask the user to input the array elements
	printf("Enter %d ASCII characters representing a decimal number: ", size);
	for (int i = 0; i < size; i++) {
		scanf(" %c", &asciiArray[i]); // Note the space before %c to consume whitespace characters
	}

	// Convert the ASCII array to unsigned integer
	unsigned int result = asciiArrayToUnsignedInt(asciiArray, size);
	printf("Unsigned integer value: %u\n", result);

	return 0;
}

