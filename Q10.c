#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sum = 0;
    int i, n = 9;  // Number of terms

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    if (x <= 0) {
        printf("The input must be a positive number for this series.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        term = pow(x - 1, i) / (i * 1.0); // Calculate each term
        if (i % 2 == 0) {
            sum -= term;  // Subtract even terms
        } else {
            sum += term;  // Add odd terms
        }
    }

    printf("Approximation of ln(%.2lf) using the first nine terms of the series: %.6lf\n", x, sum);

    return 0;
}
