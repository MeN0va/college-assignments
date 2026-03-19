#include <stdio.h>
#include <math.h>

struct Point {
    int x;
    int y;
};

int main(void) {
    struct Point point1, point2;

    printf("Point 1 - Enter x: ");
    scanf("%d", &point1.x);

    printf("Point 1 - Enter y: ");
    scanf("%d", &point1.y);

    printf("Point 2 - Enter x: ");
    scanf("%d", &point2.x);

    printf("Point 2 - Enter y: ");
    scanf("%d", &point2.y);

    double d = sqrt(pow(point2.x - point1.x, 2) + pow(point2.y - point1.y, 2));

    printf("Distance: %.2lf\n", d);

    return 0;
}

