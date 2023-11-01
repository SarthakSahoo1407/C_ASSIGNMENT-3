#include <stdio.h>

int main() {
    int n = 7;  // Number of rows
    int i, j;

    for (i = 1; i <= n; i++) {
        // Print the first half of each row
        for (j = 1; j <= n - i + 1; j++) {
            printf("%c ", 'A' + j - 1);
        }

        // Print the spaces
        for (j = 1; j <= 2 * (i - 1); j++) {
            printf("  ");
        }

        // Print the secnd half of each row (excluding the last one)
        if (i <= n) {
            for (j = n - i + 1; j >= 1; j--) {
                printf("%c ", 'A' + j - 1);
            }
        }

        printf("\n");
    }

    return 0;
}
