#include <stdio.h>
#include <string.h>

struct Student {
    char name [20];
    int grade;
};

int main(void) {
    struct Student student[3];

    for (int i = 0; i < 3; i++) {
        printf("Student %d - name: ", i + 1);
        fgets(student[i].name, 20, stdin);

        student[i].name[strcspn(student[i].name, "\n")] = '\0';

        printf("Student %d - grade: ", i+1);
        scanf("%d", &student[i].grade);

        getchar();
    }

    int best_student = 0;
    for (int i = 1; i < 3; i++) {
        if (student[i].grade > student[best_student].grade) {
            best_student = i;
        }
    }

    printf("Best student: %s (%d)\n", student[best_student].name, student[best_student].grade);

    return 0;
}
