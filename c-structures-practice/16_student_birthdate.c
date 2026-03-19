#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[20];
    struct Date birthday;
};

int main(void) {
    struct Student student1;

    printf("Enter name: ");
    fgets(student1.name, 20, stdin);
    student1.name[strcspn(student1.name, "\n")] = '\0';

    printf("Enter day: ");
    scanf("%d", &student1.birthday.day);
    printf("Enter month: ");
    scanf("%d", &student1.birthday.month);
    printf("Enter year: ");
    scanf("%d", &student1.birthday.year);

    printf("%s was born on %02d.%02d.%02d\n", student1.name, student1.birthday.day, student1.birthday.month, student1.birthday.year);

    return 0;
}
