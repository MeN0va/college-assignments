#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main(void) {
    struct Time time1, time2;
    int difference;

    printf("Time 1 - hours: ");
    scanf("%d", &time1.hours);
    printf("Time 1 - minutes: ");
    scanf("%d", &time1.minutes);
    printf("Time 1 - seconds: ");
    scanf("%d", &time1.seconds);

    printf("Time 2 - hours: ");
    scanf("%d", &time2.hours);
    printf("Time 2 - minutes: ");
    scanf("%d", &time2.minutes);
    printf("Time 2 - seconds: ");
    scanf("%d", &time2.seconds);

    int d1 = (time1.hours * 3600) + (time1.minutes * 60) + time1.seconds;
    int d2 = (time2.hours * 3600) + (time2.minutes * 60) + time2.seconds;

    if (d1 > d2) {
        difference = d1 - d2;
    } else {
        difference = d2 - d1;
    }

    printf("Difference: %d seconds\n", difference);

    return 0;
}

