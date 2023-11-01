#include <stdio.h>

int main() {
    FILE *inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Failed to open input file.\n");
        return 1;
    }

    int playerNumber;
    char record[1000]; // Assuming a maximum record length of 1000 characters
    while (fscanf(inputFile, " %d %s", &playerNumber, record) == 2) {
        int atBats = 0;
        int hits = 0;

        for (int i = 0; record[i] != '\0'; i++) {
            if (record[i] == 'H') {
                hits++;
                atBats++;
            } else if (record[i] == 'O' || record[i] == 'S') {
                atBats++;
            }
        }

        double battingAverage = (double)hits / atBats;

        printf("Player %d's record: %s\n", playerNumber, record);
        printf("Player %d's batting average: %.3lf\n", playerNumber, battingAverage);
    }

    fclose(inputFile);
    return 0;
}
