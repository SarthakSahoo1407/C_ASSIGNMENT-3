#include <stdio.h>

int main() {
    int n, digitSum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Display each digit starting from the rightmost digit
    while (n > 0) {
        int digit = n % 10;
        printf("%d ", digit);
        digitSum += digit;
        n /= 10;
    }

    // Check if the number is divisible by 9
    if (digitSum % 9 == 0) {
        printf("\nThe number is divisible by 9\n");
    } else {
        printf("\nThe number is not divisible by 9\n");
    }

    return 0;
}