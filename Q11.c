#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int choice, num;

    while (1) {
        printf("Menu:\n");
        printf("1. Factorial of a number\n");
        printf("2. Prime or not\n");
        printf("3. Odd or even\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (num < 0) {
                    printf("Factorial is not defined for negative numbers.\n");
                } else {
                    printf("Factorial of %d is %d\n", num, factorial(num));
                }
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isPrime(num)) {
                    printf("%d is a prime number.\n", num);
                } else {
                    printf("%d is not a prime number.\n", num);
                }
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (num % 2 == 0) {
                    printf("%d is even.\n", num);
                } else {
                    printf("%d is odd.\n", num);
                }
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid option. Please choose a valid option (1-4).\n");
        }
    }

    return 0;
}
