#include <stdio.h>
#include <math.h>

struct Point {
    int x;
    int y;
};

struct Segment {
    struct Point start;
    struct Point end;
};

int main(void) {
    struct Segment segment1;

    printf("Start point - x: ");
    scanf("%d", &segment1.start.x);
    printf("Start point - y: ");
    scanf("%d", &segment1.start.y);

    printf("End point - x: ");
    scanf("%d", &segment1.end.x);
    printf("End point - y: ");
    scanf("%d", &segment1.end.y);

    double length = sqrt(pow(segment1.end.x - segment1.start.x, 2) + pow(segment1.end.y - segment1.start.y, 2));

    printf("Segment length: %.2lf\n", length);

    return 0;
}
