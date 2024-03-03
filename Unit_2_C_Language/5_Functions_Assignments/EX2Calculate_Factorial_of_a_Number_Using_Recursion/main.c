#include <stdio.h>
#include <stdbool.h>

int factorial(int number);

int main() {
    int number;

    printf("Enter your number: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &number);
    int result = factorial(number);
    printf ("result is %d\n" , result);

    return 0;
}
int factorial(int number){
    if (number ==0){
        return 1;
    }else
    return number * factorial(number-1);


}
