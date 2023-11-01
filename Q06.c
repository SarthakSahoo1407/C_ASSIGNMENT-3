#include <stdio.h>

int main() {
    FILE *input;
    input = fopen("vspeed.txt", "r");

    if (input == NULL) {
        perror("Failed to open the file vspeed.txt");
        return 1;
    }

    int speed;
    int highSpeedCount = 0, mediumSpeedCount = 0, slowSpeedCount = 0;
    double highSpeedSum = 0, mediumSpeedSum = 0, slowSpeedSum = 0;

    while (fscanf(input, "%d", &speed) != EOF) {
        if (speed >= 90) {
            highSpeedCount++;
            highSpeedSum += speed;
            printf("High-speed vehicle: %d mph\n", speed);
        } else if (speed >= 50) {
            mediumSpeedCount++;
            mediumSpeedSum += speed;
            printf("Medium-speed vehicle: %d mph\n", speed);
        } else {
            slowSpeedCount++;
            slowSpeedSum += speed;
            printf("Slow-speed vehicle: %d mph\n", speed);
        }
    }

    fclose(input);

    double avgHighSpeed = (highSpeedCount > 0) ? (highSpeedSum / highSpeedCount) : 0;
    double avgMediumSpeed = (mediumSpeedCount > 0) ? (mediumSpeedSum / mediumSpeedCount) : 0;
    double avgSlowSpeed = (slowSpeedCount > 0) ? (slowSpeedSum / slowSpeedCount) : 0;

    printf("\nSummary:\n");
    printf("High-speed vehicles: %d (Avg Speed: %.2lf mph)\n", highSpeedCount, avgHighSpeed);
    printf("Medium-speed vehicles: %d (Avg Speed: %.2lf mph)\n", mediumSpeedCount, avgMediumSpeed);
    printf("Slow-speed vehicles: %d (Avg Speed: %.2lf mph)\n", slowSpeedCount, avgSlowSpeed);
    return 0;
}