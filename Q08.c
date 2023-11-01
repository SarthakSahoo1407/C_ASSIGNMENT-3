#include <stdio.h>

char calculateGrade(int averageScore) {
    if (averageScore >= 80)
        return 'A';
    else if (averageScore >= 65)
        return 'B';
    else if (averageScore >= 40)
        return 'C';
    else
        return 'F';
}

int main() {
    int numStudents;
    scanf("%d", &numStudents);

    if (numStudents <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }

    printf("Student\tMarks\tAverage\tGrade\n");
    for (int student = 1; student <= numStudents; student++) {
        int marks[4];
        int sum = 0;

        for (int subject = 0; subject < 4; subject++) {
            scanf("%d", &marks[subject]);

            if (marks[subject] < 0 || marks[subject] > 100) {
                printf("Invalid marks for Student %d.\n", student);
                return 1;
            }

            sum += marks[subject];
        }

        int averageScore = sum / 4;
        char grade = calculateGrade(averageScore);

        printf("   %d\t%d\t%d.%02d\t%c\n", student, sum, averageScore, (sum % 4) * 25, grade);
    }

    return 0;
}
