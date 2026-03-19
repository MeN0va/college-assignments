#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int grade;
};

int main(void) {
    struct Student student[3];

    for (int i = 0; i < 3; i++) {
        printf("Student %d - name: ", i + 1);
        fgets(student[i].name, 20, stdin);

        student[i].name[strcspn(student[i].name, "\n")] = '\0';

        printf("Student %d - grade: ", i + 1);
        scanf("%d", &student[i].grade);

        getchar();
    }

    double sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += student[i].grade;
    }

    double average_grade = sum / 3.0;

    printf("Average grade: %.2lf\n", average_grade);

    return 0;
}
