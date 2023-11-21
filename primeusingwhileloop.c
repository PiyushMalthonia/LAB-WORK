#include <stdio.h>

int main() {
    int num, i, c = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) { // Changed num%i--0 to num % i == 0
            c++;
            break; // Added 'break' statement to exit the loop once a divisor is found
        }
    }

    if (c == 0 && num != 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num); // Added a newline character '\n' here
    }

    return 0;
}