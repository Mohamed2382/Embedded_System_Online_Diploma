#include <stdio.h>
#include <stdbool.h>

void printPrimes(int start, int end);

int main() {
    int start, end;

    printf("Enter start number: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &start);

    printf("Enter end number: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &end);

    printPrimes(start, end);

    return 0;
}

void printPrimes(int start, int end) {
    printf("Prime numbers between %d and %d are: ", start, end);

    for (int i = start; i <= end; i++) {
        bool isPrime = true;

        if (i <= 1) {
            isPrime = false;
        } else {
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
}
