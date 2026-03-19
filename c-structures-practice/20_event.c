#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Time {
    int hours;
    int minutes;
};

struct Event {
    char name[40];
    struct Date date;
    struct Time time;
};

int main(void) {
    struct Event event1;

    printf("Event name: ");
    fgets(event1.name, 40, stdin);
    event1.name[strcspn(event1.name, "\n")] = '\0';

    printf("Date - day: ");
    scanf("%d", &event1.date.day);
    printf("Date - month: ");
    scanf("%d", &event1.date.month);
    printf("Date - year: ");
    scanf("%d", &event1.date.year);

    printf("Time - hours: ");
    scanf("%d", &event1.time.hours);
    printf("Time - minutes: ");
    scanf("%d", &event1.time.minutes);

    printf("Event: %s\n", event1.name);
    printf("When: %02d.%02d.%d at %02d:%02d\n", event1.date.day, event1.date.month, event1.date.year, event1.time.hours, event1.time.minutes);

    return 0;
}
