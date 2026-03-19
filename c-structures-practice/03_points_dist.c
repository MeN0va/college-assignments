#include <stdio.h>
#include <string.h>
#include <math.h>

struct Point {
    double x;
    double y;
};

int main(void) {
    struct Point point1;

    printf("Enter x: ");
    scanf("%lf", &point1.x);

    printf("Enter y: ");
    scanf("%lf", &point1.y);

    double d = sqrt(point1.x * point1.x + point1.y * point1.y);

    printf("Distance from origin: %.2lf\n", d);

    return 0;
}

