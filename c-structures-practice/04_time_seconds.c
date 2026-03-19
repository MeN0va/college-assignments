#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main(void) {
    struct Time time1;

    printf("Enter hours: ");
    scanf("%d", &time1.hours);

    printf("Enter minutes:");
    scanf("%d", &time1.minutes);

    printf("Enter seconds: ");
    scanf("%d", &time1.seconds);

    int timeSeconds = (time1.hours * 3600) + (time1.minutes * 60) + time1.seconds;

    printf("Total seconds: %d\n", timeSeconds);

    return 0;
}

